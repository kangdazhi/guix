/* This is a small demo of the high-performance GUIX graphics framework. */

#include <stdio.h>
#include "tx_api.h"
#include "gx_api.h"
#include "gx_validation_utility.h"
#include "gx_system.h"

TEST_PARAM test_parameter = {
    "guix_system_string_width_get_no_output", /* Test name */
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
       on the pixelmap drawing example. These operations simulate 
       user input. */
    gx_validation_control_thread_create(control_thread_entry);
}

#ifdef WIN32
#undef WIN32
#endif

#include "gx_validation_wrapper.h"
#include "demo_guix_all_widgets.c"

extern GX_FONT _gx_system_font_8bpp;

static VOID control_thread_entry(ULONG input)
{
int              failed_tests = 0;
UINT             status;
GX_STRING        string;
GX_CONST GX_CHAR test_string[] = "test";
GX_VALUE         width;
GX_FONT         *font = &_gx_system_font_8bpp;
GX_FONT          invalid_font = { 0x08, 0, 0, 18,  13, 0x20, 0x7e, {GX_NULL}, NULL };
#ifdef GX_ENABLE_DEPRECATED_STRING_API
GX_CHAR          invalid_string[GX_MAX_STRING_LENGTH + 1];

    memset(invalid_string, 'x', GX_MAX_STRING_LENGTH + 1);
    status = gx_system_string_width_get(font, invalid_string, GX_MAX_STRING_LENGTH, &width);
    EXPECT_EQ(GX_INVALID_STRING_LENGTH, status);

    status = gx_system_string_width_get(font, invalid_string, -1, &width);
    EXPECT_EQ(GX_INVALID_STRING_LENGTH, status);

    status = gx_system_string_width_get(font, test_string, -1, &width);
    EXPECT_EQ(GX_SUCCESS, status);
#endif
    string.gx_string_ptr = test_string;
    string.gx_string_length = sizeof(test_string) - 1;
    status = gx_system_string_width_get_ext(GX_NULL, &string, &width);
    EXPECT_EQ(GX_PTR_ERROR, status);

    status = gx_system_string_width_get_ext(font, GX_NULL, &width);
    EXPECT_EQ(GX_PTR_ERROR, status);

    status = gx_system_string_width_get_ext(font, &string, GX_NULL);
    EXPECT_EQ(GX_PTR_ERROR, status);

    status = gx_system_string_width_get_ext(&invalid_font, &string, &width);
    EXPECT_EQ(GX_INVALID_FONT, status);

    string.gx_string_length = sizeof(test_string) - 2;
    status = gx_system_string_width_get_ext(font, &string, &width);
    EXPECT_EQ(GX_INVALID_STRING_LENGTH, status);

    string.gx_string_length = sizeof(test_string);
    status = gx_system_string_width_get_ext(font, &string, &width);
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
