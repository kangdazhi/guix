/* This is a small demo of the high-performance GUIX graphics framework. */

#include <stdio.h>
#include "tx_api.h"
#include "gx_api.h"
#include "gx_validation_utility.h"
#include "gx_scroll_wheel.h"

TEST_PARAM test_parameter = {
    "guix_numeric_pixelmap_prompt_value_set_no_output", /* Test name */
    0, 0, 0, 0  /* Define the coordinates of the capture area.*/
};

int main(int argc, char ** argv)
{
    /* Start ThreadX system */
    tx_kernel_enter(); 
    return(0);
}

static VOID      control_thread_entry(ULONG);

VOID tx_application_define(void *first_unused_memory)
{
    gx_validation_application_define(first_unused_memory);
    
    /* Termiante the test if it runs for more than 100 ticks */
    /* This function is not implemented yet. */
    gx_validation_watchdog_create(100);

    /* Create a dedicated thread to perform various operations
       on the line drawing example. These operations simulate 
       user input. */
    gx_validation_control_thread_create(control_thread_entry);
}


#ifdef WIN32
#undef WIN32
#endif

#include "gx_validation_wrapper.h"
#include "demo_guix_all_widgets.c"

VOID numeric_value_format(GX_NUMERIC_PIXELMAP_PROMPT *prompt, INT value)
{
    memset(prompt->gx_numeric_pixelmap_prompt_buffer, '0', GX_NUMERIC_PROMPT_BUFFER_SIZE);
}

static VOID control_thread_entry(ULONG input)
{
int                         failed_tests = 0;
UINT                        status;
GX_NUMERIC_PIXELMAP_PROMPT *prompt = &text_screen.text_screen_numeric_pixelmap_prompt;

    gx_numeric_pixelmap_prompt_format_function_set(prompt, numeric_value_format);

    status = gx_numeric_pixelmap_prompt_value_set(prompt, 0);
    EXPECT_EQ(GX_INVALID_STRING_LENGTH, status);
   
    if(failed_tests == 0) 
    {
        gx_validation_print_test_result(TEST_SUCCESS);
        exit(0);
    }
    else 
    {
        gx_validation_print_test_result(TEST_FAIL);
        exit(1);
    }
}
