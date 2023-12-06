/* This is a small demo of the high-performance GUIX graphics framework. */

#include <stdio.h>
#include "tx_api.h"
#include "gx_api.h"
#include "gx_validation_utility.h"

TEST_PARAM test_parameter = {
    "guix_scrollbar_value_set", /* Test name */
    347, 43, 567, 187  /* Define the coordinates of the capture area.
                         In this test, we only need to capture the scrollbar
                         drawing area.  */
};

static VOID      control_thread_entry(ULONG);
int main(int argc, char ** argv)
{
    /* Parse the command scrollbar argument. */
    gx_validation_setup(argc, argv);

    /* Start ThreadX system */
    tx_kernel_enter(); 
    return(0);
}

VOID tx_application_define(void *first_unused_memory)
{

    /* Create a dedicated thread to perform various operations
       on the scrollbar drawing example. These operations simulate 
       user input. */
    gx_validation_control_thread_create(control_thread_entry);

    /* Termiante the test if it runs for more than 100 ticks */
    /* This function is not implemented yet. */
    gx_validation_watchdog_create(100);

    /* Call the actual scrollbar routine. */
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

#define EXPECT_EQ(expected, actual) \
    if((expected) != (actual))          \
    {                               \
        printf("\nERROR! File: %s Line: %d\n", __FILE__, __LINE__); \
        printf("Expected: 0x%x, (%d) Got: 0x%x (%d)\n", (UINT)(expected), (INT)(expected), (UINT)(actual), (INT)(actual)); \
        failed_tests++; \
    }


/* This thread simulates user input.  Its priority is lower
   than the GUIX thread, so that GUIX finishes an operation 
   before this thread is able to issue the next command. */
static VOID control_thread_entry(ULONG input)
{
int              frame_id = 1;
GX_SCROLLBAR    *test_scroll = &window_screen.window_screen_vertical_scroll_1;
GX_SCROLLBAR     scrollbar;
UINT             status;
INT              failed_tests = 0;

    status = gx_scrollbar_value_set(GX_NULL, 0);
    EXPECT_EQ(GX_PTR_ERROR, status);

    memset(&scrollbar, 0, sizeof(GX_SCROLLBAR));
    status = gx_scrollbar_value_set(&scrollbar, 0);
    EXPECT_EQ(GX_INVALID_WIDGET, status);

    ToggleScreen(pWindowScreen, pButtonScreen);

    gx_scrollbar_value_set(test_scroll, 100);

    gx_validation_set_frame_id(frame_id++);
    gx_validation_set_frame_comment("set vertical scroll value to 100");
    gx_validation_screen_refresh();

    /* Signal the end of the test case.  Verify the output. */
    gx_validation_end();

    if(failed_tests == 0)
    {
        exit(0);
    }
    else
    {
        exit(1);
    }
}