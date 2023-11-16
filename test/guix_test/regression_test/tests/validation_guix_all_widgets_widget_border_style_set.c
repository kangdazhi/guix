/* This is a small demo of the high-performance GUIX graphics framework. */

#include <stdio.h>
#include "tx_api.h"
#include "gx_api.h"
#include "gx_validation_utility.h"

TEST_PARAM test_parameter = {
    "guix_all_widgets_widget_border_style_set", /* Test name */
    0, 0, 640, 480  /* Define the coordinates of the capture area.
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
int           frame_id = 1;

    /* Set window border style. */
    gx_widget_border_style_set(pButtonScreen, GX_STYLE_BORDER_NONE);
    gx_validation_set_frame_id(frame_id++);
    sprintf(test_comment, "Set none border style to button_screen");
    gx_validation_set_frame_comment(test_comment);
    gx_validation_screen_refresh();
    
    /* Set window border style. */
    gx_widget_border_style_set(pButtonScreen, GX_STYLE_BORDER_RECESSED);
    gx_validation_set_frame_id(frame_id++);
    sprintf(test_comment, "Set recessed border style to button_screen");
    gx_validation_set_frame_comment(test_comment);
    gx_validation_screen_refresh();
    
    /* Set window border style. */
    gx_widget_border_style_set(&button_screen.button_screen_icon_button_6, GX_STYLE_BORDER_RECESSED);
    gx_validation_set_frame_id(frame_id++);
    sprintf(test_comment, "Set recessed style to icon 6");
    gx_validation_set_frame_comment(test_comment);
    gx_validation_screen_refresh();
    
            
    /* Set window border style. */
    gx_widget_border_style_set(pWindowScreen, GX_STYLE_BORDER_RECESSED);
    gx_validation_set_frame_id(frame_id++);
    sprintf(test_comment, "Set recessed style to window screen, and toggle to window screen.");
    gx_validation_set_frame_comment(test_comment);
    gx_widget_detach(pButtonScreen);
    gx_widget_attach(root, pWindowScreen);
    
    /* Signal the end of the test case.  Verify the output. */
    gx_validation_end();

    exit(0);
}
