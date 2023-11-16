/* This is a small demo of the high-performance GUIX graphics framework. */

#include <stdio.h>
#include "tx_api.h"
#include "gx_api.h"
#include "gx_validation_utility.h"
#include "gx_system.h"

TEST_PARAM test_parameter = {
    "guix_sl_input_text_set", /* Test name */
    114, 69, 538, 119  /* Define the coordinates of the capture area.
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
#ifdef win32_graphics_driver_setup_565rgb
#undef win32_graphics_driver_setup_565rgb  
#endif
#define win32_graphics_driver_setup_565rgb  gx_validation_graphics_driver_setup_565rgb


#ifdef WIN32
#undef WIN32
#endif

#include "gx_validation_wrapper.h"
#include "demo_guix_sl_text_input_16bpp.c"

static GX_CHAR test_comment[256];
static GX_CHAR input_buffer[3];

/* This thread simulates user input.  Its priority is lower
   than the GUIX thread, so that GUIX finishes an operation 
   before this thread is able to issue the next command. */
static VOID control_thread_entry(ULONG input)
{
GX_SINGLE_LINE_TEXT_INPUT *text_input_ptr;
INT                        frame_id = 1;
GX_STRING                  string;

    text_input_ptr = &pMainScreen->window_sl_text_input;

    /* Remove cursor blink style. */
    gx_single_line_text_input_style_remove(text_input_ptr, GX_STYLE_CURSOR_BLINK);
    gx_single_line_text_input_style_remove(text_input_ptr, GX_STYLE_TEXT_ALIGNMENT_MASK);
    gx_single_line_text_input_style_add(text_input_ptr, GX_STYLE_TEXT_RIGHT);
    gx_prompt_font_set((GX_PROMPT *)text_input_ptr, GX_FONT_ID_CHINESE_18PIX);
    gx_widget_string_get_ext(text_input_ptr, GX_STRING_ID_STRING_TEST_TEXT_SET, &string);
    gx_single_line_text_input_text_set_ext(text_input_ptr, &string);

    gx_validation_set_frame_id(frame_id++);
    sprintf(test_comment, "set a Chinese string with its size bigger than input buffer size");
    gx_validation_set_frame_comment(test_comment);
    gx_validation_screen_refresh();

    text_input_ptr->gx_single_line_text_input_buffer = input_buffer;
    text_input_ptr->gx_single_line_text_input_buffer_size = 3;
    gx_single_line_text_input_text_set(text_input_ptr, "1234");

    gx_validation_set_frame_id(frame_id++);
    sprintf(test_comment, "set a new buffer with buffer size equal to 3, set a new text \"1234\"");
    gx_validation_set_frame_comment(test_comment);
    gx_validation_screen_refresh();
   
#ifdef GX_ENABLE_DEPRECATED_STRING_API
    gx_single_line_text_input_text_set(text_input_ptr, GX_NULL);
    gx_validation_set_frame_id(frame_id++);
    gx_validation_set_frame_comment("Set null string");
    gx_validation_screen_refresh();
#endif
     
    /* Signal the end of the test case.  Verify the output. */
    gx_validation_end();

    exit(0);
}
