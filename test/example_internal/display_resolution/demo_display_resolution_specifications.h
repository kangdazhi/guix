/*******************************************************************************/
/*  This file is auto-generated by Azure RTOS GUIX Studio. Do not edit this    */
/*  file by hand. Modifications to this file should only be made by running    */
/*  the Azure RTOS GUIX Studio application and re-generating the application   */
/*  specification file(s). For more information please refer to the Azure RTOS */
/*  GUIX Studio User Guide, or visit our web site at azure.com/rtos            */
/*                                                                             */
/*  GUIX Studio Revision 6.2.0.1                                               */
/*  Date (dd.mm.yyyy): 31.10.2022   Time (hh:mm): 14:09                        */
/*******************************************************************************/


#ifndef _DEMO_DISPLAY_RESOLUTION_SPECIFICATIONS_H_
#define _DEMO_DISPLAY_RESOLUTION_SPECIFICATIONS_H_

#include "gx_api.h"

/* Determine if C++ compiler is being used, if so use standard C.              */
#ifdef __cplusplus
extern   "C" {
#endif

#if GX_PALETTE_MODE_AA_TEXT_COLORS != 8
#error "The symbol GX_PALETTE_MODE_AA_TEXT_COLORS does not match the setting in the Studio project."
#endif

/* Define widget ids                                                           */

#define ID_HORIZONTAL_SCROLLBAR 1
#define ID_VERTICAL_SCROLLBAR 2
#define ID_VERTICAL_LIST 3
#define IDB_NEXT 4
#define ID_DROP_LIST 5


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
    GX_RESOURCE_ID pixelmap_id;
} GX_ICON_BUTTON_PROPERTIES;

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


/* Declare top-level control blocks                                            */

typedef struct MAIN_DISPLAY_MAIN_WINDOW_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
    GX_WINDOW MAIN_DISPLAY_main_window_window_5;
    GX_WINDOW MAIN_DISPLAY_main_window_window_6;
    GX_WINDOW MAIN_DISPLAY_main_window_window_8;
    GX_WINDOW MAIN_DISPLAY_main_window_scroll_frame_1;
    GX_WINDOW MAIN_DISPLAY_main_window_window_4;
    GX_SCROLLBAR MAIN_DISPLAY_main_window_hscroll_1;
    GX_SCROLLBAR MAIN_DISPLAY_main_window_vertical_scroll_1;
    GX_VERTICAL_LIST MAIN_DISPLAY_main_window_vertical_list;
    GX_TEXT_BUTTON MAIN_DISPLAY_main_window_button_1;
    GX_TEXT_BUTTON MAIN_DISPLAY_main_window_button_2;
    GX_TEXT_BUTTON MAIN_DISPLAY_main_window_button_3;
    GX_TEXT_BUTTON MAIN_DISPLAY_main_window_button_4;
    GX_PROMPT MAIN_DISPLAY_main_window_nested_label_1;
    GX_PROMPT MAIN_DISPLAY_main_window_frame_label_1;
    GX_PROMPT MAIN_DISPLAY_main_window_vlist_label_1;
    GX_HORIZONTAL_LIST MAIN_DISPLAY_main_window_horizontal_list_1;
    GX_ICON_BUTTON MAIN_DISPLAY_main_window_icon_button_1;
    GX_ICON_BUTTON MAIN_DISPLAY_main_window_icon_button_2;
    GX_ICON_BUTTON MAIN_DISPLAY_main_window_icon_button_3;
    GX_ICON_BUTTON MAIN_DISPLAY_main_window_icon_button_4;
    GX_ICON_BUTTON MAIN_DISPLAY_main_window_icon_button_5;
    GX_PROMPT MAIN_DISPLAY_main_window_hlist_label_1;
    GX_TEXT_BUTTON MAIN_DISPLAY_main_window_next_button_1;
    GX_DROP_LIST MAIN_DISPLAY_main_window_drop_list;
    GX_ICON_BUTTON MAIN_DISPLAY_main_window_icon_button;
    GX_PROMPT MAIN_DISPLAY_main_window_hlist_label;
} MAIN_DISPLAY_MAIN_WINDOW_CONTROL_BLOCK;


/* extern statically defined control blocks                                    */

#ifndef GUIX_STUDIO_GENERATED_FILE
extern MAIN_DISPLAY_MAIN_WINDOW_CONTROL_BLOCK MAIN_DISPLAY_main_window;
#endif
typedef struct SECONDARY_WINDOW_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
    GX_WINDOW SECONDARY_window_window_5;
    GX_WINDOW SECONDARY_window_window_6;
    GX_WINDOW SECONDARY_window_window_8;
    GX_WINDOW SECONDARY_window_scroll_frame_1;
    GX_WINDOW SECONDARY_window_window_4;
    GX_SCROLLBAR SECONDARY_window_hscroll_1;
    GX_SCROLLBAR SECONDARY_window_vertical_scroll_1;
    GX_VERTICAL_LIST SECONDARY_window_vertical_list;
    GX_TEXT_BUTTON SECONDARY_window_button_1;
    GX_TEXT_BUTTON SECONDARY_window_button_2;
    GX_TEXT_BUTTON SECONDARY_window_button_3;
    GX_TEXT_BUTTON SECONDARY_window_button_4;
    GX_PROMPT SECONDARY_window_nested_label_1;
    GX_PROMPT SECONDARY_window_frame_label_1;
    GX_PROMPT SECONDARY_window_vlist_label_1;
    GX_HORIZONTAL_LIST SECONDARY_window_horizontal_list_1;
    GX_ICON_BUTTON SECONDARY_window_icon_button_1;
    GX_ICON_BUTTON SECONDARY_window_icon_button_2;
    GX_ICON_BUTTON SECONDARY_window_icon_button_3;
    GX_ICON_BUTTON SECONDARY_window_icon_button_4;
    GX_ICON_BUTTON SECONDARY_window_icon_button_5;
    GX_PROMPT SECONDARY_window_hlist_label_1;
    GX_TEXT_BUTTON SECONDARY_window_next_button_1;
    GX_DROP_LIST SECONDARY_window_drop_list;
    GX_ICON_BUTTON SECONDARY_window_icon_button;
    GX_PROMPT SECONDARY_window_hlist_label;
} SECONDARY_WINDOW_CONTROL_BLOCK;


/* extern statically defined control blocks                                    */

#ifndef GUIX_STUDIO_GENERATED_FILE
extern SECONDARY_WINDOW_CONTROL_BLOCK SECONDARY_window;
#endif

/* Declare event process functions, draw functions, and callback functions     */


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

UINT gx_studio_text_button_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_icon_button_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_prompt_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_window_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_vertical_list_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_horizontal_list_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_drop_list_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_horizontal_scrollbar_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_vertical_scrollbar_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
GX_WIDGET *gx_studio_widget_create(GX_BYTE *storage, GX_CONST GX_STUDIO_WIDGET *definition, GX_WIDGET *parent);
UINT gx_studio_named_widget_create(char *name, GX_WIDGET *parent, GX_WIDGET **new_widget);
UINT gx_studio_display_configure(USHORT display, UINT (*driver)(GX_DISPLAY *), GX_UBYTE language, USHORT theme, GX_WINDOW_ROOT **return_root);

/* Determine if a C++ compiler is being used.  If so, complete the standard
  C conditional started above.                                                 */
#ifdef __cplusplus
}
#endif

#endif                                       /* sentry                         */
