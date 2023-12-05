/*******************************************************************************/
/*  This file is auto-generated by GUIX Studio. Do not edit this file by hand. */
/*  Modifications to this file should only be made by running the GUIX Studio  */
/*  application and re-generating the application. For more information please */
/*  refer to the GUIX Studio user's guide, or visit our web site at            */
/*  www.expresslogic.com.                                                      */
/*                                                                             */
/*  GUIX Studio Revision 5.5.1.0                                               */
/*  Date (dd.mm.yyyy): 30. 7.2019   Time (hh:mm): 22:49                        */
/*******************************************************************************/


#ifndef _ALL_WIDGETS_EXECUTE_SPECIFICATIONS_H_
#define _ALL_WIDGETS_EXECUTE_SPECIFICATIONS_H_

#include "gx_api.h"

/* Determine if C++ compiler is being used, if so use standard C.              */
#ifdef __cplusplus
extern   "C" {
#endif

/* Define widget ids                                                           */

#define ID_MENU_SCREEN 1
#define IDB_NEXT 2
#define ID_SCROLL_WHEEL_SCREEN 3
#define ID_DAY_WHEEL 4
#define ID_MONTH_WHEEL 5
#define ID_YEAR_WHEEL 6
#define ID_DAY_SELECT 7
#define ID_DAY_INPUT 8
#define ID_SPRITE_SCREEN 9
#define ID_ALPHA_SLIDER 10
#define ID_BIRD_SPRITE 11
#define IDB_OK 12
#define IDB_CANCEL 13
#define ID_INDICATOR_SCREEN 14
#define ID_SLIDER_HORIZONTAL 15
#define ID_SLIDER_1 16
#define ID_PIXELMAP_SLIDER_H 17
#define ID_PIXELMAP_SLIDER1 18
#define ID_TEXT_SCREEN 19
#define ID_PROMPT_1 20
#define ID_PROMPT_3 21
#define ID_PROMPT_4 22
#define ID_WINDOW_SCREEN 23
#define ID_HORIZONTAL_SCROLLBAR 24
#define ID_VERTICAL_SCROLLBAR 25
#define ID_VERTICAL_LIST 26
#define ID_DROP_LIST 27
#define ID_BUTTON_SCREEN 28
#define ID_TEXT_BUTTON_test 29
#define ID_CHECKBOX 30
#define ID_RADIO_BUTTON 31
#define ID_PIXELMAP_BUTTON 32
#define ID_ICON 33
#define ID_ICON_BUTTON 34


/* Define animation ids                                                        */

#define ANIMATION_ID_MENU_SCREEN_FADE_OUT 1
#define ANI_ID_DAY_WHEEL_SLIDE 2
#define TEST_ANIMATION_ID_10 3
#define TEST_ANIMATION_ID_12 4
#define TEST_ANIMATION_ID_2 5
#define TEST_ANIMATION_ID_9 6
#define GX_NEXT_ANIMATION_ID 7


/* Define user event ids                                                       */

enum user_defined_events{
    USER_EVENT_ID = GX_FIRST_USER_EVENT,
    GX_NEXT_USER_EVENT_ID
};

#define GX_ACTION_FLAG_DYNAMIC_TARGET 0x01
#define GX_ACTION_FLAG_DYNAMIC_PARENT 0x02
typedef struct GX_STUDIO_ACTION_STRUCT
{
    GX_UBYTE opcode;
    GX_UBYTE flags;
    GX_CONST VOID *parent;
    GX_CONST VOID *target;
    GX_CONST GX_ANIMATION_INFO  *animation;
} GX_STUDIO_ACTION;

typedef struct GX_STUDIO_EVENT_ENTRY_STRUCT
{
    ULONG event_type;
    USHORT event_sender;
    GX_CONST GX_STUDIO_ACTION *action_list;
} GX_STUDIO_EVENT_ENTRY;

typedef struct GX_STUDIO_EVENT_PROCESS_STRUCT 
{
    GX_CONST GX_STUDIO_EVENT_ENTRY *event_table;
    UINT (*chain_event_handler)(GX_WIDGET *, GX_EVENT *);
} GX_STUDIO_EVENT_PROCESS;

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
} GX_ML_TEXT_BUTTON_PROPERTIES;

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
    GX_SPRITE_FRAME *frame_list;
    USHORT           frame_count;
} GX_SPRITE_PROPERTIES;

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
    GX_CONST GX_CHAR * (*callback)(struct GX_STRING_SCROLL_WHEEL_STRUCT *, INT);
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
    GX_CONST GX_CHAR * (*callback)(struct GX_NUMERIC_SCROLL_WHEEL_STRUCT *, INT);
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
    GX_BYTE        whitespace;
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
    GX_BYTE  whitespace;
    GX_BYTE  line_space;
    GX_CHAR *buffer;
    UINT buffer_size;
} GX_MULTI_LINE_TEXT_INPUT_PROPERTIES;

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

typedef struct MENU_SCREEN_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
    GX_TEXT_BUTTON menu_screen_next_button_8;
    GX_PROMPT menu_screen_title_4;
    GX_PROMPT menu_screen_title_5;
    GX_ACCORDION_MENU menu_screen_one_level_accordion;
    GX_MENU menu_screen_ola_menu_1;
    GX_PROMPT menu_screen_prompt_25_1;
    GX_NUMERIC_PROMPT menu_screen_prompt_26_1;
    GX_MENU menu_screen_ola_menu_2;
    GX_MULTI_LINE_TEXT_VIEW menu_screen_text_view_4;
    GX_TEXT_BUTTON menu_screen_ola_menu_3;
    GX_MENU menu_screen_ola_menu_4;
    GX_MENU menu_screen_item_2;
    GX_MENU menu_screen_item;
    GX_ACCORDION_MENU menu_screen_one_level_accordion_2;
    GX_MENU menu_screen_ola_2_menu_1;
    GX_PROMPT menu_screen_prompt_11;
    GX_ACCORDION_MENU menu_screen_ola_2_menu_2;
    GX_MENU menu_screen_ola_2_menu_2_1;
    GX_PIXELMAP_PROMPT menu_screen_prompt_7;
    GX_MENU menu_screen_ola_2_menu_2_2;
    GX_NUMERIC_PIXELMAP_PROMPT menu_screen_numeric_pixelmap_prompt;
    GX_MENU menu_screen_ola_2_menu_3;
    GX_PROMPT menu_screen_prompt_10_2;
    GX_MULTI_LINE_TEXT_VIEW menu_screen_text_view;
    GX_ACCORDION_MENU menu_screen_multi_level_accordion;
    GX_MENU menu_screen_mla_menu_1;
    GX_ACCORDION_MENU menu_screen_mla_menu_1_accordion_1;
    GX_MENU menu_screen_mla_menu_1_1;
    GX_MULTI_LINE_TEXT_VIEW menu_screen_text_view_1;
    GX_MENU menu_screen_mla_menu_1_2;
    GX_PROMPT menu_screen_prompt_15;
    GX_MENU menu_screen_mla_menu_2;
    GX_ACCORDION_MENU menu_screen_mla_menu_2_accordion_1;
    GX_MENU menu_screen_mla_menu_2_1;
    GX_ACCORDION_MENU menu_screen_mla_menu_2_1_accordion_1;
    GX_MENU menu_screen_mla_menu_2_1_1;
    GX_PROMPT menu_screen_prompt_11_2;
    GX_MENU menu_screen_mla_menu_2_1_2;
    GX_PROMPT menu_screen_prompt_12;
    GX_MENU menu_screen_mla_menu_2_2;
    GX_ACCORDION_MENU menu_screen_mla_menu_2_2_accordion_1;
    GX_MENU menu_screen_mla_menu_2_2_1;
    GX_PROMPT menu_screen_prompt_13;
    GX_MENU menu_screen_mla_menu_2_2_2;
    GX_PROMPT menu_screen_prompt_14;
    GX_MENU menu_screen_mla_menu_3;
    GX_PROMPT menu_screen_mla_menu_3_item_1;
    GX_PROMPT menu_screen_mla_menu_3_item_2;
    GX_ICON menu_screen_mla_menu_3_icon_1;
    GX_PROMPT menu_screen_title_2;
    GX_TREE_VIEW menu_screen_tree_view;
    GX_MENU menu_screen_tree_menu_1;
    GX_PROMPT menu_screen_tree_menu_1_1;
    GX_PROMPT menu_screen_tree_menu_1_2;
    GX_ICON menu_screen_icon_10;
    GX_MENU menu_screen_tree_menu_2;
    GX_MENU menu_screen_tree_menu_2_1;
    GX_PROMPT menu_screen_tree_menu_2_1_1;
    GX_PROMPT menu_screen_tree_menu_2_1_2;
    GX_ICON menu_screen_icon_3;
    GX_MENU menu_screen_tree_menu_2_2;
    GX_MENU menu_screen_tree_menu_2_2_1;
    GX_PROMPT menu_screen_tree_menu_2_2_1_1;
    GX_PROMPT menu_screen_tree_menu_2_2_1_2;
    GX_ICON menu_screen_icon_6;
    GX_ICON menu_screen_icon_8;
    GX_ICON menu_screen_icon_7;
    GX_MENU menu_screen_tree_menu_3;
    GX_PROMPT menu_screen_tree_menu_3_1;
    GX_ICON menu_screen_icon_4;
    GX_SCROLLBAR menu_screen_tree_hscroll_1;
    GX_SCROLLBAR menu_screen_tree_vscroll_1;
    GX_PROMPT menu_screen_prompt_9;
    GX_MENU menu_screen_menu_1;
    GX_PROMPT menu_screen_prompt_10_1;
    GX_ICON menu_screen_icon_5;
    GX_PROMPT menu_screen_title_3;
} MENU_SCREEN_CONTROL_BLOCK;

typedef struct SCROLL_WHEEL_SCREEN_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
} SCROLL_WHEEL_SCREEN_CONTROL_BLOCK;

typedef struct SPRITE_SCREEN_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
    GX_WINDOW sprite_screen_apple_window;
    GX_SLIDER sprite_screen_slider_2;
    GX_TEXT_BUTTON sprite_screen_next_button_5;
    GX_SPRITE sprite_screen_sprite_1;
} SPRITE_SCREEN_CONTROL_BLOCK;

typedef struct POPUP_MODAL_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
    GX_TEXT_BUTTON popup_modal_OK_button;
    GX_TEXT_BUTTON popup_modal_cancel_button;
    GX_MULTI_LINE_TEXT_VIEW popup_modal_text_view_2;
    GX_WINDOW popup_modal_window_1;
    GX_PROMPT popup_modal_prompt_5;
} POPUP_MODAL_CONTROL_BLOCK;

typedef struct INDICATOR_SCREEN_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
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
    GX_NUMERIC_PIXELMAP_PROMPT text_screen_numeric_pixelmap_prompt;
    GX_NUMERIC_PROMPT text_screen_numeric_prompt;
} TEXT_SCREEN_CONTROL_BLOCK;

typedef struct WINDOW_SCREEN_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
    GX_WINDOW window_screen_window_5;
    GX_WINDOW window_screen_window_6;
    GX_WINDOW window_screen_window_8;
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
    GX_ICON_BUTTON window_screen_icon_button;
    GX_PROMPT window_screen_hlist_label;
} WINDOW_SCREEN_CONTROL_BLOCK;

typedef struct BUTTON_SCREEN_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
    GX_PROMPT button_screen_title_1;
    GX_BUTTON button_screen_base_button_1;
    GX_TEXT_BUTTON button_screen_text_button_1;
    GX_CHECKBOX button_screen_checkbox;
    GX_RADIO_BUTTON button_screen_radio_button1;
    GX_PIXELMAP_BUTTON button_screen_pixelmap_button1;
    GX_ICON button_screen_icon;
    GX_ICON_BUTTON button_screen_icon_button_6;
    GX_PROMPT button_screen_button_label_1;
    GX_PROMPT button_screen_radio_label_1;
    GX_PROMPT button_screen_pixbutton_label_1;
    GX_PROMPT button_screen_texbutton_label_1;
    GX_PROMPT button_screen_checkbox_label_1;
    GX_PROMPT button_screen_iconbutton_label_1;
    GX_PROMPT button_screen_icon_label_1;
    GX_MULTI_LINE_TEXT_BUTTON button_screen_multi_line_button_1;
    GX_PROMPT button_screen_texbutton_label_2;
} BUTTON_SCREEN_CONTROL_BLOCK;


/* extern statically defined control blocks                                    */

#ifndef GUIX_STUDIO_GENERATED_FILE
extern MENU_SCREEN_CONTROL_BLOCK menu_screen;
extern SPRITE_SCREEN_CONTROL_BLOCK sprite_screen;
extern POPUP_MODAL_CONTROL_BLOCK popup_modal;
extern TEXT_SCREEN_CONTROL_BLOCK text_screen;
extern WINDOW_SCREEN_CONTROL_BLOCK window_screen;
extern BUTTON_SCREEN_CONTROL_BLOCK button_screen;
#endif

/* Declare event process functions, draw functions, and callback functions     */

UINT scroll_wheel_screen_event_handler(GX_WINDOW *widget, GX_EVENT *event_ptr);
GX_CONST GX_CHAR *day_wheel_value_format(GX_NUMERIC_SCROLL_WHEEL *wheel, INT row);
UINT sprite_event_handler(GX_WINDOW *widget, GX_EVENT *event_ptr);
VOID apple_window_draw(GX_WINDOW *widget);
VOID numeric_pixelmap_format_func(GX_NUMERIC_PIXELMAP_PROMPT *, INT);
VOID format_func(GX_NUMERIC_PROMPT *, INT);
VOID drop_list_row_create(GX_VERTICAL_LIST *, GX_WIDGET *, INT);

/* Declare the GX_STUDIO_DISPLAY_INFO structure                                */


typedef struct GX_STUDIO_DISPLAY_INFO_STRUCT 
{
    GX_CONST GX_CHAR *name;
    GX_CONST GX_CHAR *canvas_name;
    GX_CONST GX_THEME **theme_table;
    GX_CONST GX_CHAR ***language_table;
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
} GX_STUDIO_DISPLAY_INFO;


/* Declare Studio-generated functions for creating top-level widgets           */

UINT gx_studio_button_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_text_button_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_multi_line_text_button_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_checkbox_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_radio_button_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_icon_button_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_pixelmap_button_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_icon_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_slider_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_pixelmap_slider_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_progress_bar_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_sprite_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
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
UINT gx_studio_menu_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_accordion_menu_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_tree_view_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
GX_WIDGET *gx_studio_widget_create(GX_BYTE *storage, GX_CONST GX_STUDIO_WIDGET *definition, GX_WIDGET *parent);
UINT gx_studio_named_widget_create(char *name, GX_WIDGET *parent, GX_WIDGET **new_widget);
UINT gx_studio_display_configure(USHORT display, UINT (*driver)(GX_DISPLAY *), GX_UBYTE language, USHORT theme, GX_WINDOW_ROOT **return_root);
UINT gx_studio_auto_event_handler(GX_WIDGET *widget, GX_EVENT *event_ptr, GX_CONST GX_STUDIO_EVENT_PROCESS *record);

/* Determine if a C++ compiler is being used.  If so, complete the standard
  C conditional started above.                                                 */
#ifdef __cplusplus
}
#endif

#endif                                       /* sentry                         */
