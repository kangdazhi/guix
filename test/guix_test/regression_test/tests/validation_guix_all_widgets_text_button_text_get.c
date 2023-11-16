/* This is a small demo of the high-performance GUIX graphics framework. */

#include <stdio.h>
#include "tx_api.h"
#include "gx_api.h"
#include "gx_validation_utility.h"

TEST_PARAM test_parameter = {
    "guix_all_widgets_text_button_text_get", /* Test name */
    73, 7, 572, 475  /* Define the coordinates of the capture area.
                         In this test, we only need to capture the pixelmap
                         drawing area.  */
};

static VOID      control_thread_entry(ULONG);
int main(int argc, char ** argv)
{
    /* Parse the command line argument. */
    gx_validation_setup(argc, argv);

    /* Start ThreadX system */
    tx_kernel_enter(); 
    return(0);
}

VOID tx_application_define(void *first_unused_memory)
{

    /* Create a dedicated thread to perform various operations
       on the line drawing example. These operations simulate 
       user input. */
    gx_validation_control_thread_create(control_thread_entry);

    /* Termiante the test if it runs for more than 100 ticks */
    /* This function is not implemented yet. */
    gx_validation_watchdog_create(100);

    /* Call the actual line example routine. */
    gx_validation_application_define(first_unused_memory);

}


/* Replace the default graphics driver with the validation driver. */
#ifdef win32_graphics_driver_setup_24xrgb  
#undef win32_graphics_driver_setup_24xrgb  
#endif
#define win32_graphics_driver_setup_24xrgb  gx_validation_graphics_driver_setup_24xrgb


#ifdef WIN32
#undef WIN32
#endif

#include "gx_validation_wrapper.h"
#include "demo_guix_all_widgets.c"

char test_comment[255];

/* This thread simulates user input.  Its priority is lower
   than the GUIX thread, so that GUIX finishes an operation 
   before this thread is able to issue the next command. */
static VOID control_thread_entry(ULONG input)
{
GX_TEXT_BUTTON *button;
GX_MULTI_LINE_TEXT_BUTTON *ml_button;
int                        frame_id = 1;
GX_STRING                  string;
#ifdef GX_ENABLE_DEPRECATED_STRING_API
GX_CONST GX_CHAR          *text;
#endif
    button = &button_screen.button_screen_text_button_1;
    ml_button = &button_screen.button_screen_multi_line_button_1;
    
    gx_text_button_text_id_set(button, GX_STRING_ID_STRING_2);
    
    sprintf(test_comment, "Set string id GX_STRING_ID_STRING_2 to text button");
    gx_validation_set_frame_id(frame_id++);
    gx_validation_set_frame_comment(test_comment);
    gx_validation_screen_refresh();

    gx_text_button_text_get_ext(button, &string);
#ifdef GX_ENABLE_DEPRECATED_STRING_API
    gx_text_button_text_get(button, &text);

    if(strcmp(text, string.gx_string_ptr) != 0)
    {
        exit(1);
    }
#endif
    gx_multi_line_text_button_text_set_ext(ml_button, &string);
    
    sprintf(test_comment, "Get text from text button and set it to ml_text_button.");
    gx_validation_set_frame_id(frame_id++);
    gx_validation_set_frame_comment(test_comment);
    gx_validation_screen_refresh();
    /* Signal the end of the test case.  Verify the output. */
    gx_validation_end();

    exit(0);
}
