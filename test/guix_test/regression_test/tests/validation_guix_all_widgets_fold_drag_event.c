/* This is a small demo of the high-performance GUIX graphics framework. */

#include <stdio.h>
#include "tx_api.h"
#include "gx_api.h"
#include "gx_validation_utility.h"

TEST_PARAM test_parameter = {
    "guix_all_widgets_fold_drag_event", /* Test name */
    351, 45, 563, 181  /* Define the coordinates of the capture area.
                         In this test, we only need to capture the line
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
static GX_WINDOW_ROOT nested_root_1;
#define PEN_START_X 355
#define PEN_START_Y 170

static VOID control_thread_entry(ULONG input)
{
int       frame_id = 1;
GX_EVENT  my_event;
GX_WIDGET *searched_widget = GX_NULL;

    /* cover function gx_system_widget_find and gx_widget_find */
    gx_window_root_create(&nested_root_1, "nested_root_1", &animation_canvas, GX_STYLE_BORDER_NONE, ID_ANIMATION_CANVAS_ROOT_WINDOW + 1, &NestedWindow.gx_widget_size); // Create new root window, Just used in this test.
    gx_system_widget_find(ID_WINDOW_SCREEN, 0, &searched_widget); // should return GX_NOT_FOUND
    ToggleScreen(pWindowScreen, pButtonScreen);
    gx_system_widget_find(ID_ANIMATION_CANVAS_ROOT_WINDOW + 1, 0, &searched_widget); // should return GX_SUCCESS
    gx_system_widget_find(ID_ANIMATION_CANVAS_ROOT_WINDOW, 0, &searched_widget); // should return GX_SUCCESS
    gx_system_widget_find(ID_WINDOW_SCREEN, 1, &searched_widget); // should return GX_SUCCESS
    gx_system_widget_find(ID_ANIMATION_CANVAS_ROOT_WINDOW + 1, 0, &searched_widget); // should return GX_SUCCESS
    gx_system_widget_find(ID_ANIMATION_CANVAS_ROOT_WINDOW, 0, &searched_widget); // should return GX_SUCCESS
    gx_system_widget_find(ID_WINDOW_SCREEN, 1, &searched_widget); // should return GX_SUCCESS   
    
    memset(&my_event, 0, sizeof(GX_EVENT));
    my_event.gx_event_payload.gx_event_pointdata.gx_point_x = PEN_START_X;
    my_event.gx_event_payload.gx_event_pointdata.gx_point_y = PEN_START_Y;
    my_event.gx_event_type = GX_EVENT_PEN_DOWN;
    my_event.gx_event_display_handle = 1;
    gx_system_event_fold(&my_event);
    
        gx_validation_set_frame_id(frame_id++);
    sprintf(test_comment, "Original screen, Pen dow pos: (%d, %d)",
            my_event.gx_event_payload.gx_event_pointdata.gx_point_x, my_event.gx_event_payload.gx_event_pointdata.gx_point_y);
    gx_validation_set_frame_comment(test_comment);
    gx_validation_screen_refresh();     
    
    my_event.gx_event_payload.gx_event_pointdata.gx_point_x = PEN_START_X + 20;
    my_event.gx_event_type = GX_EVENT_PEN_DRAG;
    gx_system_event_fold(&my_event);
    
    my_event.gx_event_payload.gx_event_pointdata.gx_point_x = PEN_START_X + 40;
    my_event.gx_event_type = GX_EVENT_PEN_DRAG;
    gx_system_event_fold(&my_event);

    my_event.gx_event_payload.gx_event_pointdata.gx_point_x = PEN_START_X + 60;
    my_event.gx_event_type = GX_EVENT_PEN_DRAG;
    gx_system_event_fold(&my_event);

    my_event.gx_event_payload.gx_event_pointdata.gx_point_x = PEN_START_X + 80;
    my_event.gx_event_type = GX_EVENT_PEN_DRAG;
    gx_system_event_fold(&my_event);

    my_event.gx_event_payload.gx_event_pointdata.gx_point_x = PEN_START_X + 100;
    my_event.gx_event_type = GX_EVENT_PEN_DRAG;
    gx_system_event_fold(&my_event);
    
    gx_validation_set_frame_id(frame_id++);
    sprintf(test_comment, "Drag scrollbar five times, and fold these draw events. Current pen pos: (%d, %d)",
            my_event.gx_event_payload.gx_event_pointdata.gx_point_x, my_event.gx_event_payload.gx_event_pointdata.gx_point_y);
    gx_validation_set_frame_comment(test_comment);
    gx_validation_screen_refresh();     
    
    
    /* Signal the end of the test case.  Verify the output. */
    gx_validation_end();

    exit(0);
}
