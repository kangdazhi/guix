/*******************************************************************************/
/*  This file is auto-generated by Azure RTOS GUIX Studio. Do not edit this    */
/*  file by hand. Modifications to this file should only be made by running    */
/*  the Azure RTOS GUIX Studio application and re-generating the application   */
/*  specification file(s). For more information please refer to the Azure RTOS */
/*  GUIX Studio User Guide, or visit our web site at azure.com/rtos            */
/*                                                                             */
/*  GUIX Studio Revision 6.2.0.1                                               */
/*  Date (dd.mm.yyyy): 31.10.2022   Time (hh:mm): 14:07                        */
/*******************************************************************************/


#ifndef _ALL_WIDGETS_24XRGB_ROTATED_CW_BINARY_SPECIFICATIONS_H_
#define _ALL_WIDGETS_24XRGB_ROTATED_CW_BINARY_SPECIFICATIONS_H_

#include "gx_api.h"

/* Determine if C++ compiler is being used, if so use standard C.              */
#ifdef __cplusplus
extern   "C" {
#endif

/* Define widget ids                                                           */

#define ID_PIXELMAP_SCREEN 1
#define IDB_NEXT 2
#define ID_RESIZE_SCREEN 3
#define ID_SLIDER_WIDTH 4
#define ID_WIDTH_DISPLAY 5
#define ID_RADIO_FOOT 6
#define ID_RADIO_FISH 7
#define ID_RADIO_FOOT_ALPHA 8
#define ID_SLIDER_HEIGHT 9
#define ID_HEIGHT_DISPLAY 10
#define ID_GAUGE_SCREEN 11
#define ID_GAUGE 12
#define ID_LINES_SCREEN 13
#define ID_LINE_WIDTH 14
#define ID_LINE_ANGLE 15
#define ID_ANGLE_DISPLAY 16
#define ID_ANTI_ALIASED 17
#define ID_ROUNDED 18
#define ID_LINE_WINDOW 19
#define ID_BRUSH_ALPHA_SLIDER 20
#define ID_BRUSH_ALPHA_PROMPT 21
#define ID_COLOR_BLACK 22
#define ID_COLOR_ORANGE 23
#define ID_COLOR_WHITE 24
#define ID_MENU_SCREEN 25
#define ID_SCROLL_WHEEL_SCREEN 26
#define ID_DAY_WHEEL 27
#define ID_MONTH_WHEEL 28
#define ID_YEAR_WHEEL 29
#define ID_DAY_SELECT 30
#define ID_DAY_INPUT 31
#define ID_SHAPES_SCREEN 32
#define ID_CIRCLE 33
#define ID_ELLIPSE 34
#define ID_ARC 35
#define ID_PIE 36
#define ID_RECTANGLE 37
#define ID_POLYGON 38
#define ID_ROUND_END 39
#define ID_SOLID_FILL 40
#define ID_PIXELMAP_FILL 41
#define ID_RADIUS_SLIDER 42
#define ID_RADIUS_PROMPT 43
#define ID_BRUSH_WIDTH_PROMPT 44
#define ID_BRUSH_WIDTH 45
#define ID_COMPRESS 46
#define ID_ALPHA 47
#define ID_ROTATE_SCREEN 48
#define ID_DIRECT_ROTATE 49
#define ID_SLIDER_ANGLE 50
#define ID_RADIO_APPLE 51
#define ID_INDICATOR_SCREEN 52
#define ID_SLIDER_HORIZONTAL 53
#define ID_SLIDER_1 54
#define ID_PIXELMAP_SLIDER_H 55
#define ID_PIXELMAP_SLIDER1 56
#define ID_TEXT_SCREEN 57
#define ID_PROMPT_1 58
#define ID_PROMPT_2 59
#define ID_PROMPT_3 60
#define ID_PROMPT_4 61
#define ID_WINDOW_SCREEN 62
#define ID_HORIZONTAL_SCROLLBAR 63
#define ID_VERTICAL_SCROLLBAR 64
#define ID_VERTICAL_LIST 65
#define ID_DROP_LIST 66
#define ID_BUTTON_SCREEN 67
#define ID_TEXT_BUTTON 68
#define ID_CHECKBOX 69
#define ID_RADIO_BUTTON 70
#define ID_PIXELMAP_BUTTON 71
#define ID_ICON 72
#define ID_ICON_BUTTON 73


/* Define animation ids                                                        */

#define GX_NEXT_ANIMATION_ID 1


/* Define user event ids                                                       */

#define GX_NEXT_USER_EVENT_ID GX_FIRST_USER_EVENT


/* Declare properties structures for each utilized widget type                 */

typedef struct GX_STUDIO_WIDGET_STRUCT
{
   GX_CHAR *widget_name;
   USHORT  widget_type;
   USHORT  widget_id;
   #if defined(GX_WIDGET_USER_DATA)
   INT   user_data;
   #endif
   ULONG style;
   ULONG status;
   ULONG control_block_size;
   GX_RESOURCE_ID normal_fill_color_id;
   GX_RESOURCE_ID selected_fill_color_id;
   GX_RESOURCE_ID disabled_fill_color_id;
   UINT (*create_function) (GX_CONST struct GX_STUDIO_WIDGET_STRUCT *, GX_WIDGET *, GX_WIDGET *);
   void (*draw_function) (GX_WIDGET *);
   UINT (*event_function) (GX_WIDGET *, GX_EVENT *);
   GX_RECTANGLE size;
   GX_CONST struct GX_STUDIO_WIDGET_STRUCT *next_widget;
   GX_CONST struct GX_STUDIO_WIDGET_STRUCT *child_widget;
   ULONG control_block_offset;
   GX_CONST void *properties;
} GX_STUDIO_WIDGET;

typedef struct
{
    GX_CONST GX_STUDIO_WIDGET *widget_information;
    GX_WIDGET        *widget;
} GX_STUDIO_WIDGET_ENTRY;

typedef struct
{
    GX_RESOURCE_ID string_id; 
    GX_RESOURCE_ID font_id;
    GX_RESOURCE_ID normal_text_color_id;
    GX_RESOURCE_ID selected_text_color_id;
    GX_RESOURCE_ID disabled_text_color_id;
} GX_TEXT_BUTTON_PROPERTIES;

typedef struct
{
    GX_RESOURCE_ID string_id; 
    GX_RESOURCE_ID font_id;
    GX_RESOURCE_ID normal_text_color_id;
    GX_RESOURCE_ID selected_text_color_id;
    GX_RESOURCE_ID disabled_text_color_id;
    GX_RESOURCE_ID unchecked_pixelmap_id;
    GX_RESOURCE_ID checked_pixelmap_id;
    GX_RESOURCE_ID unchecked_disabled_pixelmap_id;
    GX_RESOURCE_ID checked_disabled_pixelmap_id;
} GX_CHECKBOX_PROPERTIES;

typedef struct
{
    GX_RESOURCE_ID string_id; 
    GX_RESOURCE_ID font_id;
    GX_RESOURCE_ID normal_text_color_id;
    GX_RESOURCE_ID selected_text_color_id;
    GX_RESOURCE_ID disabled_text_color_id;
    GX_RESOURCE_ID off_pixelmap_id;
    GX_RESOURCE_ID on_pixelmap_id;
    GX_RESOURCE_ID off_disabled_pixelmap_id;
    GX_RESOURCE_ID on_disabled_pixelmap_id;
} GX_RADIO_BUTTON_PROPERTIES;

typedef struct
{
    GX_RESOURCE_ID pixelmap_id;
} GX_ICON_BUTTON_PROPERTIES;

typedef struct
{
    GX_RESOURCE_ID normal_pixelmap_id;
    GX_RESOURCE_ID selected_pixelmap_id;
    GX_RESOURCE_ID disabled_pixelmap_id;
} GX_PIXELMAP_BUTTON_PROPERTIES;

typedef struct
{
    GX_RESOURCE_ID normal_pixelmap_id;
    GX_RESOURCE_ID selected_pixelmap_id;
} GX_ICON_PROPERTIES;

typedef struct
{
    int tickmark_count;
    int minval;
    int maxval;
    int current_val;
    int increment;
    GX_VALUE min_travel;
    GX_VALUE max_travel;
    GX_VALUE needle_width;
    GX_VALUE needle_height;
    GX_VALUE needle_inset;
    GX_VALUE needle_hotspot;
} GX_SLIDER_PROPERTIES;

typedef struct
{
    int min_val;
    int max_val;
    int current_val;
    int increment;
    GX_VALUE min_travel;
    GX_VALUE max_travel;
    GX_VALUE needle_width;
    GX_VALUE needle_height;
    GX_VALUE needle_inset;
    GX_VALUE needle_hotspot;
    GX_RESOURCE_ID lower_pixelmap;
    GX_RESOURCE_ID upper_pixelmap;
    GX_RESOURCE_ID needle_pixelmap;
} GX_PIXELMAP_SLIDER_PROPERTIES;

typedef struct
{
    GX_RESOURCE_ID string_id;
    GX_RESOURCE_ID font_id;
    GX_RESOURCE_ID normal_text_color_id;
    GX_RESOURCE_ID selected_text_color_id;
    GX_RESOURCE_ID disabled_text_color_id;
} GX_PROMPT_PROPERTIES;

typedef struct
{
    GX_RESOURCE_ID string_id;
    GX_RESOURCE_ID font_id;
    GX_RESOURCE_ID normal_text_color_id;
    GX_RESOURCE_ID selected_text_color_id;
    GX_RESOURCE_ID disabled_text_color_id;
    VOID (*format_func)(GX_NUMERIC_PROMPT *, INT);
    INT            numeric_prompt_value;
} GX_NUMERIC_PROMPT_PROPERTIES;

typedef struct
{
    GX_RESOURCE_ID string_id;
    GX_RESOURCE_ID font_id;
    GX_RESOURCE_ID normal_text_color_id;
    GX_RESOURCE_ID selected_text_color_id;
    GX_RESOURCE_ID disabled_text_color_id;
    GX_RESOURCE_ID left_map_id;
    GX_RESOURCE_ID fill_map_id;
    GX_RESOURCE_ID right_map_id;
    GX_RESOURCE_ID selected_left_map_id;
    GX_RESOURCE_ID selected_fill_map_id;
    GX_RESOURCE_ID selected_right_map_id;
} GX_PIXELMAP_PROMPT_PROPERTIES;

typedef struct
{
    GX_RESOURCE_ID string_id;
    GX_RESOURCE_ID font_id;
    GX_RESOURCE_ID normal_text_color_id;
    GX_RESOURCE_ID selected_text_color_id;
    GX_RESOURCE_ID disabled_text_color_id;
    GX_RESOURCE_ID left_map_id;
    GX_RESOURCE_ID fill_map_id;
    GX_RESOURCE_ID right_map_id;
    GX_RESOURCE_ID selected_left_map_id;
    GX_RESOURCE_ID selected_fill_map_id;
    GX_RESOURCE_ID selected_right_map_id;
    VOID (*format_func)(GX_NUMERIC_PIXELMAP_PROMPT *, INT);
    INT            numeric_prompt_value;
} GX_NUMERIC_PIXELMAP_PROMPT_PROPERTIES;

typedef struct
{
    GX_RESOURCE_ID wallpaper_id;
} GX_WINDOW_PROPERTIES;

typedef struct
{
    GX_RESOURCE_ID wallpaper_id;
    VOID (*callback)(GX_VERTICAL_LIST *, GX_WIDGET *, INT);
    int total_rows;
} GX_VERTICAL_LIST_PROPERTIES;

typedef struct
{
    GX_RESOURCE_ID wallpaper_id;
    VOID (*callback)(GX_HORIZONTAL_LIST *, GX_WIDGET *, INT);
    int total_rows;
} GX_HORIZONTAL_LIST_PROPERTIES;

typedef struct
{
    GX_RESOURCE_ID pixelmap_id;
    GX_RESOURCE_ID wallpaper_id;
    VOID (*callback)(GX_VERTICAL_LIST *, GX_WIDGET *, INT);
    int total_rows;
    int open_height;
} GX_DROP_LIST_PROPERTIES;

typedef struct
{
    int                 total_rows;
    int                 selected_row;
    GX_VALUE            row_height;
    GX_UBYTE            start_alpha;
    GX_UBYTE            end_alpha;
    GX_RESOURCE_ID      normal_font;
    GX_RESOURCE_ID      selected_font;
    GX_RESOURCE_ID      normal_text_color;
    GX_RESOURCE_ID      selected_text_color;
    GX_RESOURCE_ID      disabled_text_color;
    GX_RESOURCE_ID      wallpaper_id;
    GX_RESOURCE_ID      selected_background;
    GX_CONST GX_RESOURCE_ID  *string_id_list;
    UINT (*callback)(struct GX_STRING_SCROLL_WHEEL_STRUCT *, INT, GX_STRING *);
} GX_STRING_SCROLL_WHEEL_PROPERTIES;

typedef struct
{
    int                 total_rows;
    int                 selected_row;
    GX_VALUE            row_height;
    GX_UBYTE            start_alpha;
    GX_UBYTE            end_alpha;
    GX_RESOURCE_ID      normal_font;
    GX_RESOURCE_ID      selected_font;
    GX_RESOURCE_ID      normal_text_color;
    GX_RESOURCE_ID      selected_text_color;
    GX_RESOURCE_ID      disabled_text_color;
    GX_RESOURCE_ID      wallpaper_id;
    GX_RESOURCE_ID      selected_background;
    UINT (*callback)(struct GX_NUMERIC_SCROLL_WHEEL_STRUCT *, INT, GX_STRING *);
    int                 start_val;
    int                 end_val;
} GX_NUMERIC_SCROLL_WHEEL_PROPERTIES;

typedef struct
{
    GX_RESOURCE_ID string_id;
    GX_RESOURCE_ID font_id;
    GX_RESOURCE_ID normal_text_color_id;
    GX_RESOURCE_ID selected_text_color_id;
    GX_RESOURCE_ID disabled_text_color_id;
    GX_RESOURCE_ID readonly_fill_color_id;
    GX_RESOURCE_ID readonly_text_color_id;
    GX_CHAR *buffer;
    UINT buffer_size;
} GX_SINGLE_LINE_TEXT_INPUT_PROPERTIES;

typedef struct
{
    GX_RESOURCE_ID string_id;
    GX_RESOURCE_ID font_id;
    GX_RESOURCE_ID normal_text_color_id;
    GX_RESOURCE_ID selected_text_color_id;
    GX_RESOURCE_ID disabled_text_color_id;
    GX_UBYTE       whitespace;
    GX_BYTE        line_space;
} GX_ML_TEXT_VIEW_PROPERTIES;

typedef struct
{
    GX_RESOURCE_ID string_id;
    GX_RESOURCE_ID font_id;
    GX_RESOURCE_ID normal_text_color_id;
    GX_RESOURCE_ID selected_text_color_id;
    GX_RESOURCE_ID disabled_text_color_id;
    GX_RESOURCE_ID readonly_fill_color_id;
    GX_RESOURCE_ID readonly_text_color_id;
    GX_UBYTE whitespace;
    GX_BYTE  line_space;
    GX_CHAR *buffer;
    UINT buffer_size;
} GX_MULTI_LINE_TEXT_INPUT_PROPERTIES;

typedef struct
{
    GX_VALUE start_angle;
    GX_VALUE animation_steps;
    GX_VALUE animation_delay;
    GX_VALUE needle_xpos;
    GX_VALUE needle_ypos;
    GX_VALUE needle_xcor;
    GX_VALUE needle_ycor;
    GX_RESOURCE_ID normal_pixelmap_id;
    GX_RESOURCE_ID selected_pixelmap_id;
    GX_RESOURCE_ID needle_pixelmap_id;
} GX_CIRCULAR_GAUGE_PROPERTIES;

typedef struct
{
    GX_RESOURCE_ID string_id;
    GX_RESOURCE_ID font_id;
    GX_RESOURCE_ID normal_text_color_id;
    GX_RESOURCE_ID selected_text_color_id;
    GX_RESOURCE_ID disabled_text_color_id;
    GX_RESOURCE_ID left_map_id;
    GX_RESOURCE_ID fill_map_id;
    GX_RESOURCE_ID right_map_id;
    GX_RESOURCE_ID selected_left_map_id;
    GX_RESOURCE_ID selected_fill_map_id;
    GX_RESOURCE_ID selected_right_map_id;
    GX_VALUE       text_x_offset;
    GX_VALUE       text_y_offset;
    GX_VALUE       list_total_count;
} GX_MENU_PROPERTIES;

typedef struct
{
    GX_RESOURCE_ID expand_map_id;
    GX_RESOURCE_ID collapse_map_id;
    GX_RESOURCE_ID root_line_color_id;
    GX_VALUE       indentation;
} GX_TREE_VIEW_PROPERTIES;


/* Declare top-level control blocks                                            */

typedef struct PIXELMAP_SCREEN_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
    GX_TEXT_BUTTON pixelmap_screen_next_button_10;
    GX_ICON pixelmap_screen_icon_24xrgb_a;
    GX_ICON pixelmap_screen_icon_24xrgb_c;
    GX_ICON pixelmap_screen_icon_24xrgb_c_a;
    GX_ICON pixelmap_screen_icon_24xrgb;
    GX_ICON pixelmap_screen_icon_32argb_a;
    GX_ICON pixelmap_screen_icon_32argb_c_a;
    GX_ICON pixelmap_screen_icon_4444argb_a;
    GX_ICON pixelmap_screen_icon_4444argb_c_a;
    GX_ICON pixelmap_screen_icon_565rgb;
    GX_ICON pixelmap_screen_icon_565rgb_a;
    GX_ICON pixelmap_screen_icon_565rgb_c;
    GX_ICON pixelmap_screen_icon_565rgb_c_a;
    GX_ICON pixelmap_screen_icon_palette;
    GX_ICON pixelmap_screen_icon_palette_a;
    GX_ICON pixelmap_screen_icon_palette_c;
    GX_ICON pixelmap_screen_icon_palette_c_a;
    GX_ICON pixelmap_screen_icon_png_a;
    GX_ICON pixelmap_screen_icon_24xrgb_a_1;
    GX_ICON pixelmap_screen_icon_png;
} PIXELMAP_SCREEN_CONTROL_BLOCK;

typedef struct RESIZE_SCREEN_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
    GX_PROMPT resize_screen_prompt_16;
    GX_SLIDER resize_screen_slider_angle;
    GX_PROMPT resize_screen_prompt_angle;
    GX_WINDOW resize_screen_resize_window;
    GX_RADIO_BUTTON resize_screen_radio_button_5;
    GX_RADIO_BUTTON resize_screen_radio_button_6;
    GX_RADIO_BUTTON resize_screen_radio_button_7;
    GX_PROMPT resize_screen_prompt_17;
    GX_PROMPT resize_screen_prompt_18;
    GX_SLIDER resize_screen_slider_angle_1;
    GX_PROMPT resize_screen_prompt_angle_1;
    GX_TEXT_BUTTON resize_screen_next_button_9;
} RESIZE_SCREEN_CONTROL_BLOCK;

typedef struct GAUGE_SCREEN_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
    GX_PROMPT gauge_screen_prompt_6;
    GX_TEXT_BUTTON gauge_screen_next_button_4;
    GX_CIRCULAR_GAUGE gauge_screen_gauge_1;
} GAUGE_SCREEN_CONTROL_BLOCK;

typedef struct LINES_SCREEN_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
    GX_PROMPT lines_screen_prompt_16;
    GX_SLIDER lines_screen_line_width_slider;
    GX_PROMPT lines_screen_prompt_17;
    GX_SLIDER lines_screen_line_angle_slider;
    GX_PROMPT lines_screen_width_display;
    GX_PROMPT lines_screen_angle_display;
    GX_CHECKBOX lines_screen_aa_box;
    GX_CHECKBOX lines_screen_rounded_box;
    GX_WINDOW lines_screen_line_window;
    GX_PROMPT lines_screen_color_label;
    GX_PROMPT lines_screen_prompt_18;
    GX_SLIDER lines_screen_brush_alpha_slider_1;
    GX_PROMPT lines_screen_brush_alpha_prompt;
    GX_TEXT_BUTTON lines_screen_next_button_8;
    GX_PROMPT lines_screen_title_2;
    GX_RADIO_BUTTON lines_screen_radio_button_5;
    GX_RADIO_BUTTON lines_screen_radio_button_10;
    GX_RADIO_BUTTON lines_screen_radio_button_11;
} LINES_SCREEN_CONTROL_BLOCK;

typedef struct MENU_SCREEN_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
    GX_TEXT_BUTTON menu_screen_next_button_6;
    GX_PROMPT menu_screen_title_3;
    GX_PROMPT menu_screen_text_accordio_menu;
    GX_ACCORDION_MENU menu_screen_one_level_accordion_2;
    GX_MENU menu_screen_ola_menu_4;
    GX_PROMPT menu_screen_prompt_25;
    GX_NUMERIC_PROMPT menu_screen_prompt_26;
    GX_MENU menu_screen_ola_menu;
    GX_MULTI_LINE_TEXT_VIEW menu_screen_text_view_3;
    GX_TEXT_BUTTON menu_screen_ola_menu_1;
    GX_MENU menu_screen_ola_menu_2;
    GX_MENU menu_screen_item_1;
    GX_MENU menu_screen_item_2;
    GX_PROMPT menu_screen_text_tree_view;
    GX_TREE_VIEW menu_screen_tree_view;
    GX_MENU menu_screen_tree_menu_6;
    GX_PROMPT menu_screen_tree_menu;
    GX_PROMPT menu_screen_tree_menu_1;
    GX_ICON menu_screen_icon_10_1;
    GX_MENU menu_screen_tree_menu_7;
    GX_MENU menu_screen_tree_menu_4;
    GX_PROMPT menu_screen_tree_menu_2;
    GX_PROMPT menu_screen_tree_menu_2_1;
    GX_ICON menu_screen_icon_11_1;
    GX_MENU menu_screen_tree_menu_2_4;
    GX_MENU menu_screen_tree_menu_2_3;
    GX_PROMPT menu_screen_tree_menu_2_2;
    GX_PROMPT menu_screen_tree_menu_2_2_1;
    GX_ICON menu_screen_icon_9;
    GX_ICON menu_screen_icon_6;
    GX_ICON menu_screen_icon_8;
    GX_MENU menu_screen_tree_menu_8;
    GX_PROMPT menu_screen_tree_menu_5;
    GX_ICON menu_screen_icon_12_1;
    GX_SCROLLBAR menu_screen_tree_hscroll;
    GX_SCROLLBAR menu_screen_tree_vscroll;
    GX_PROMPT menu_screen_prompt_16_1;
    GX_MENU menu_screen_menu;
    GX_PROMPT menu_screen_prompt_10_2;
    GX_ICON menu_screen_icon_7;
} MENU_SCREEN_CONTROL_BLOCK;

typedef struct SCROLL_WHEEL_SCREEN_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
    GX_TEXT_BUTTON scroll_wheel_screen_next_button_7;
    GX_PROMPT scroll_wheel_screen_prompt_8;
    GX_NUMERIC_SCROLL_WHEEL scroll_wheel_screen_day_wheel_1;
    GX_STRING_SCROLL_WHEEL scroll_wheel_screen_month_wheel_1;
    GX_NUMERIC_SCROLL_WHEEL scroll_wheel_screen_year_wheel_1;
    GX_TEXT_BUTTON scroll_wheel_screen_button_5;
    GX_SINGLE_LINE_TEXT_INPUT scroll_wheel_screen_text_input_3;
} SCROLL_WHEEL_SCREEN_CONTROL_BLOCK;

typedef struct SHAPES_SCREEN_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
    GX_WINDOW shapes_screen_graphics_window;
    GX_TEXT_BUTTON shapes_screen_next_button_5;
    GX_WINDOW shapes_screen_window_11;
    GX_RADIO_BUTTON shapes_screen_radio_button_6;
    GX_RADIO_BUTTON shapes_screen_radio_button_7;
    GX_RADIO_BUTTON shapes_screen_radio_button_8;
    GX_RADIO_BUTTON shapes_screen_radio_button_9;
    GX_RADIO_BUTTON shapes_screen_radio_button_3;
    GX_RADIO_BUTTON shapes_screen_radio_button_4;
    GX_CHECKBOX shapes_screen_checkbox_anti_alised;
    GX_CHECKBOX shapes_screen_checkbox_round_end;
    GX_CHECKBOX shapes_screen_checkbox_fill;
    GX_CHECKBOX shapes_screen_checkbox_pixelmap_fill;
    GX_PROMPT shapes_screen_prompt_14;
    GX_PROMPT shapes_screen_prompt_13;
    GX_SLIDER shapes_screen_radius_slider_1;
    GX_PROMPT shapes_screen_prompt_6;
    GX_PROMPT shapes_screen_prompt_7;
    GX_SLIDER shapes_screen_brush_width_slider;
    GX_PROMPT shapes_screen_prompt_11_1;
    GX_SLIDER shapes_screen_brush_alpha_slider;
    GX_PROMPT shapes_screen_prompt_12;
    GX_CHECKBOX shapes_screen_checkbox_1;
    GX_CHECKBOX shapes_screen_checkbox_2;
} SHAPES_SCREEN_CONTROL_BLOCK;

typedef struct ROTATE_SCREEN_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
    GX_TEXT_BUTTON rotate_screen_next_button_4;
    GX_CHECKBOX rotate_screen_checkbox;
    GX_PROMPT rotate_screen_prompt;
    GX_SLIDER rotate_screen_slider_2;
    GX_WINDOW rotate_screen_pixelmap_window;
    GX_RADIO_BUTTON rotate_screen_radio_button;
    GX_RADIO_BUTTON rotate_screen_radio_button_1;
    GX_RADIO_BUTTON rotate_screen_radio_button_2;
    GX_NUMERIC_PROMPT rotate_screen_angle_value;
} ROTATE_SCREEN_CONTROL_BLOCK;

typedef struct INDICATOR_SCREEN_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
    GX_SLIDER indicator_screen_slider;
    GX_SLIDER indicator_screen_slider_1;
    GX_PIXELMAP_SLIDER indicator_screen_pixelmap_slider;
    GX_PIXELMAP_SLIDER indicator_screen_pixelmap_slider_1;
    GX_ICON indicator_screen_icon_1;
    GX_ICON indicator_screen_icon_2;
    GX_PROMPT indicator_screen_slider_title;
    GX_TEXT_BUTTON indicator_screen_next_button_3;
    GX_PROGRESS_BAR indicator_screen_progress_bar_1;
    GX_PIXELMAP_SLIDER indicator_screen_pixelmap_slider_2;
    GX_ICON indicator_screen_icon_3;
    GX_ICON indicator_screen_icon_4;
    GX_RADIAL_PROGRESS_BAR indicator_screen_radial_progress_bar_1;
} INDICATOR_SCREEN_CONTROL_BLOCK;

typedef struct TEXT_SCREEN_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
    GX_PROMPT text_screen_prompt_1;
    GX_PROMPT text_screen_prompt_2;
    GX_PROMPT text_screen_prompt_3;
    GX_PIXELMAP_PROMPT text_screen_prompt_4;
    GX_SINGLE_LINE_TEXT_INPUT text_screen_text_input_1;
    GX_MULTI_LINE_TEXT_VIEW text_screen_text_view_1;
    GX_MULTI_LINE_TEXT_INPUT text_screen_text_input_2;
    GX_TEXT_BUTTON text_screen_next_button_2;
    GX_NUMERIC_PIXELMAP_PROMPT text_screen_numeric_pixelmap_prompt_2;
    GX_NUMERIC_PROMPT text_screen_numeric_prompt_1;
} TEXT_SCREEN_CONTROL_BLOCK;

typedef struct WINDOW_SCREEN_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
    GX_WINDOW window_screen_window_5;
    GX_WINDOW window_screen_window_6;
    GX_WINDOW window_screen_window_8;
    GX_WINDOW window_screen_fade_window;
    GX_WINDOW window_screen_scroll_frame_1;
    GX_WINDOW window_screen_window_4;
    GX_SCROLLBAR window_screen_hscroll_1;
    GX_SCROLLBAR window_screen_vertical_scroll_1;
    GX_VERTICAL_LIST window_screen_vertical_list;
    GX_TEXT_BUTTON window_screen_button_1;
    GX_TEXT_BUTTON window_screen_button_2;
    GX_TEXT_BUTTON window_screen_button_3;
    GX_TEXT_BUTTON window_screen_button_4;
    GX_PROMPT window_screen_nested_label_1;
    GX_PROMPT window_screen_frame_label_1;
    GX_PROMPT window_screen_vlist_label_1;
    GX_HORIZONTAL_LIST window_screen_horizontal_list_1;
    GX_ICON_BUTTON window_screen_icon_button_1;
    GX_ICON_BUTTON window_screen_icon_button_2;
    GX_ICON_BUTTON window_screen_icon_button_3;
    GX_ICON_BUTTON window_screen_icon_button_4;
    GX_ICON_BUTTON window_screen_icon_button_5;
    GX_PROMPT window_screen_hlist_label_1;
    GX_TEXT_BUTTON window_screen_next_button_1;
    GX_DROP_LIST window_screen_drop_list;
    GX_BUTTON window_screen_button;
    GX_PROMPT window_screen_hlist_label;
} WINDOW_SCREEN_CONTROL_BLOCK;

typedef struct BUTTON_SCREEN_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
    GX_PROMPT button_screen_title_1;
    GX_BUTTON button_screen_base_button_1;
    GX_TEXT_BUTTON button_screen_text_button_1;
    GX_CHECKBOX button_screen_checkbox1_1;
    GX_RADIO_BUTTON button_screen_radio_button1_1;
    GX_PIXELMAP_BUTTON button_screen_pixelmap_button1_1;
    GX_ICON button_screen_icon;
    GX_ICON_BUTTON button_screen_icon_button_6;
    GX_PROMPT button_screen_button_label_1;
    GX_PROMPT button_screen_radio_label_1;
    GX_PROMPT button_screen_pixbutton_label_1;
    GX_PROMPT button_screen_texbutton_label_1;
    GX_PROMPT button_screen_checkbox_label_1;
    GX_PROMPT button_screen_iconbutton_label_1;
    GX_PROMPT button_screen_icon_label_1;
    GX_TEXT_BUTTON button_screen_next_button;
} BUTTON_SCREEN_CONTROL_BLOCK;


/* extern statically defined control blocks                                    */

#ifndef GUIX_STUDIO_GENERATED_FILE
extern PIXELMAP_SCREEN_CONTROL_BLOCK pixelmap_screen;
extern RESIZE_SCREEN_CONTROL_BLOCK resize_screen;
extern GAUGE_SCREEN_CONTROL_BLOCK gauge_screen;
extern LINES_SCREEN_CONTROL_BLOCK lines_screen;
extern MENU_SCREEN_CONTROL_BLOCK menu_screen;
extern SCROLL_WHEEL_SCREEN_CONTROL_BLOCK scroll_wheel_screen;
extern SHAPES_SCREEN_CONTROL_BLOCK shapes_screen;
extern ROTATE_SCREEN_CONTROL_BLOCK rotate_screen;
extern INDICATOR_SCREEN_CONTROL_BLOCK indicator_screen;
extern TEXT_SCREEN_CONTROL_BLOCK text_screen;
extern WINDOW_SCREEN_CONTROL_BLOCK window_screen;
extern BUTTON_SCREEN_CONTROL_BLOCK button_screen;
#endif

/* Declare event process functions, draw functions, and callback functions     */

UINT next_button_handler(GX_WINDOW *widget, GX_EVENT *event_ptr);
UINT resize_screen_event_handler(GX_WINDOW *widget, GX_EVENT *event_ptr);
VOID resize_window_draw(GX_WINDOW *widget);
UINT gauge_event_handle(GX_WINDOW *widget, GX_EVENT *event_ptr);
UINT main_event_handler(GX_WINDOW *widget, GX_EVENT *event_ptr);
VOID line_win_draw(GX_WINDOW *widget);
UINT scroll_wheel_screen_event_handler(GX_WINDOW *widget, GX_EVENT *event_ptr);
UINT day_wheel_value_format(GX_NUMERIC_SCROLL_WHEEL *wheel, INT row, GX_STRING *string);
UINT shapesscreen_event_handler(GX_WINDOW *widget, GX_EVENT *event_ptr);
VOID graphics_draw(GX_WINDOW *widget);
UINT rotate_event_handler(GX_WINDOW *widget, GX_EVENT *event_ptr);
VOID pixelmap_draw(GX_WINDOW *widget);
VOID drop_list_row_create(GX_VERTICAL_LIST *, GX_WIDGET *, INT);

/* Declare the GX_STUDIO_DISPLAY_INFO structure                                */


typedef struct GX_STUDIO_DISPLAY_INFO_STRUCT 
{
    GX_CONST GX_CHAR *name;
    GX_CONST GX_CHAR *canvas_name;
    GX_CONST GX_THEME **theme_table;
    GX_CONST GX_STRING **language_table;
    USHORT   theme_table_size;
    USHORT   language_table_size;
    UINT     string_table_size;
    UINT     x_resolution;
    UINT     y_resolution;
    GX_DISPLAY *display;
    GX_CANVAS  *canvas;
    GX_WINDOW_ROOT *root_window;
    GX_COLOR   *canvas_memory;
    ULONG      canvas_memory_size;
    USHORT     rotation_angle;
} GX_STUDIO_DISPLAY_INFO;


/* Declare Studio-generated functions for creating top-level widgets           */

UINT gx_studio_button_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_text_button_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_checkbox_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_radio_button_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_icon_button_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_pixelmap_button_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_icon_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_slider_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_pixelmap_slider_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_progress_bar_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_radial_progress_bar_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_prompt_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_numeric_prompt_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_pixelmap_prompt_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_numeric_pixelmap_prompt_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_window_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_vertical_list_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_horizontal_list_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_drop_list_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_string_scroll_wheel_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_numeric_scroll_wheel_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_text_input_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_multi_line_text_view_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_multi_line_text_input_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_horizontal_scrollbar_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_vertical_scrollbar_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_circular_gauge_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_menu_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_accordion_menu_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_tree_view_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
GX_WIDGET *gx_studio_widget_create(GX_BYTE *storage, GX_CONST GX_STUDIO_WIDGET *definition, GX_WIDGET *parent);
UINT gx_studio_named_widget_create(char *name, GX_WIDGET *parent, GX_WIDGET **new_widget);
UINT gx_studio_display_configure(USHORT display, UINT (*driver)(GX_DISPLAY *), GX_UBYTE language, USHORT theme, GX_WINDOW_ROOT **return_root);

/* Determine if a C++ compiler is being used.  If so, complete the standard
  C conditional started above.                                                 */
#ifdef __cplusplus
}
#endif

#endif                                       /* sentry                         */
