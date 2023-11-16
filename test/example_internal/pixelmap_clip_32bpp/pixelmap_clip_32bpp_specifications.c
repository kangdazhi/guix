/*******************************************************************************/
/*  This file is auto-generated by Azure RTOS GUIX Studio. Do not edit this    */
/*  file by hand. Modifications to this file should only be made by running    */
/*  the Azure RTOS GUIX Studio application and re-generating the application   */
/*  specification file(s). For more information please refer to the Azure RTOS */
/*  GUIX Studio User Guide, or visit our web site at azure.com/rtos            */
/*                                                                             */
/*  GUIX Studio Revision 6.2.0.1                                               */
/*  Date (dd.mm.yyyy): 31.10.2022   Time (hh:mm): 14:11                        */
/*******************************************************************************/


#define GUIX_STUDIO_GENERATED_FILE
#include <stddef.h>
#include "pixelmap_clip_32bpp_resources.h"
#include "pixelmap_clip_32bpp_specifications.h"

static GX_WIDGET *gx_studio_nested_widget_create(GX_BYTE *control, GX_CONST GX_STUDIO_WIDGET *definition, GX_WIDGET *parent);
WINDOW_CONTROL_BLOCK window;
GX_DISPLAY main_display_control_block;
GX_WINDOW_ROOT main_display_root_window;
GX_CANVAS  main_display_canvas_control_block;
ULONG      main_display_canvas_memory[76800];

extern GX_CONST GX_THEME *main_display_theme_table[];
extern GX_CONST GX_STRING *main_display_language_table[];

GX_STUDIO_DISPLAY_INFO pixelmap_clip_32bpp_display_table[1] =
{
    {
    "main_display",
    "main_display_canvas",
    main_display_theme_table,
    main_display_language_table,
    MAIN_DISPLAY_THEME_TABLE_SIZE,
    MAIN_DISPLAY_LANGUAGE_TABLE_SIZE,
    MAIN_DISPLAY_STRING_TABLE_SIZE,
    320,                                     /* x resolution                   */
    240,                                     /* y resolution                   */
    &main_display_control_block,
    &main_display_canvas_control_block,
    &main_display_root_window,
    main_display_canvas_memory,              /* canvas memory area             */
    307200,                                  /* canvas memory size in bytes    */
    0                                        /* rotation angle                 */
    }
};


UINT gx_studio_checkbox_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent)
{
    UINT status;
    GX_CHECKBOX *button = (GX_CHECKBOX *) control_block;
    GX_TEXT_BUTTON *text_button = (GX_TEXT_BUTTON *) button;
    GX_CHECKBOX_PROPERTIES *props = (GX_CHECKBOX_PROPERTIES *) info->properties;
    status = gx_checkbox_create(button, info->widget_name, parent, props->string_id, info->style, info->widget_id, &info->size);
    if (status == GX_SUCCESS)
    {
        gx_text_button_font_set(text_button, props->font_id);
#if defined(GUIX_5_4_0_COMPATIBILITY)
        gx_text_button_text_color_set(text_button, props->normal_text_color_id, props->selected_text_color_id);
 #else
        gx_text_button_text_color_set(text_button, props->normal_text_color_id, props->selected_text_color_id, props->disabled_text_color_id);
#endif

        if (props->unchecked_pixelmap_id ||
            props->checked_pixelmap_id ||
            props->unchecked_disabled_pixelmap_id ||
            props->checked_disabled_pixelmap_id)
        {
            gx_checkbox_pixelmap_set(button,
                                     props->unchecked_pixelmap_id,
                                     props->checked_pixelmap_id,
                                     props->unchecked_disabled_pixelmap_id,
                                     props->checked_disabled_pixelmap_id);
        }
    }
    return status;
}

UINT gx_studio_prompt_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent)
{
    UINT status;
    GX_PROMPT *prompt = (GX_PROMPT *) control_block;
    GX_PROMPT_PROPERTIES *props = (GX_PROMPT_PROPERTIES *) info->properties;
    status = gx_prompt_create(prompt, info->widget_name, parent, props->string_id, info->style, info->widget_id, &info->size);
    if (status == GX_SUCCESS)
    {
        gx_prompt_font_set(prompt, props->font_id);
#if defined(GUIX_5_4_0_COMPATIBILITY)
        gx_prompt_text_color_set(prompt, props->normal_text_color_id, props->selected_text_color_id);
#else
        gx_prompt_text_color_set(prompt, props->normal_text_color_id, props->selected_text_color_id, props->disabled_text_color_id);
#endif
    }
    return status;
}

UINT gx_studio_window_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent)
{
    UINT status;
    GX_WINDOW *window = (GX_WINDOW *) control_block;
    GX_WINDOW_PROPERTIES *props = (GX_WINDOW_PROPERTIES *) info->properties;
    status = gx_window_create(window, info->widget_name, parent, info->style, info->widget_id, &info->size);
    if (status == GX_SUCCESS)
    {
        if (props->wallpaper_id)
        {
            gx_window_wallpaper_set(window, props->wallpaper_id, info->style & GX_STYLE_TILE_WALLPAPER);
        }
    }
    return status;
}
GX_WINDOW_PROPERTIES window_properties =
{
    GX_PIXELMAP_ID_CAL_POPPY_200             /* wallpaper pixelmap id          */
};
GX_WINDOW_PROPERTIES window_pixelmap_window_properties =
{
    GX_PIXELMAP_ID_RAINBOW200_NOALPHA_NONCOMPRESS  /* wallpaper pixelmap id    */
};
GX_PROMPT_PROPERTIES window_prompt_5_properties =
{
    GX_STRING_ID_STRING_23,                  /* string id                      */
    GX_FONT_ID_PROMPT,                       /* font id                        */
    GX_COLOR_ID_TEXT,                        /* normal text color              */
    GX_COLOR_ID_SELECTED_TEXT,               /* selected text color            */
    GX_COLOR_ID_TEXT                         /* disabled text color            */
};
GX_PROMPT_PROPERTIES window_prompt_6_properties =
{
    GX_STRING_ID_STRING_24,                  /* string id                      */
    GX_FONT_ID_PROMPT,                       /* font id                        */
    GX_COLOR_ID_TEXT,                        /* normal text color              */
    GX_COLOR_ID_SELECTED_TEXT,               /* selected text color            */
    GX_COLOR_ID_TEXT                         /* disabled text color            */
};
GX_PROMPT_PROPERTIES window_prompt_7_properties =
{
    GX_STRING_ID_STRING_25,                  /* string id                      */
    GX_FONT_ID_PROMPT,                       /* font id                        */
    GX_COLOR_ID_TEXT,                        /* normal text color              */
    GX_COLOR_ID_SELECTED_TEXT,               /* selected text color            */
    GX_COLOR_ID_TEXT                         /* disabled text color            */
};
GX_PROMPT_PROPERTIES window_prompt_8_properties =
{
    GX_STRING_ID_STRING_26,                  /* string id                      */
    GX_FONT_ID_PROMPT,                       /* font id                        */
    GX_COLOR_ID_TEXT,                        /* normal text color              */
    GX_COLOR_ID_SELECTED_TEXT,               /* selected text color            */
    GX_COLOR_ID_TEXT                         /* disabled text color            */
};
GX_PROMPT_PROPERTIES window_prompt_1_properties =
{
    GX_STRING_ID_STRING_27,                  /* string id                      */
    GX_FONT_ID_PROMPT,                       /* font id                        */
    GX_COLOR_ID_TEXT,                        /* normal text color              */
    GX_COLOR_ID_SELECTED_TEXT,               /* selected text color            */
    GX_COLOR_ID_TEXT                         /* disabled text color            */
};
GX_CHECKBOX_PROPERTIES window_checkbox_alpha_properties =
{
    GX_STRING_ID_STRING_13,                  /* string id                      */
    GX_FONT_ID_BUTTON,                       /* font id                        */
    GX_COLOR_ID_BTN_TEXT,                    /* normal text color              */
    GX_COLOR_ID_BTN_TEXT,                    /* selected text color            */
    GX_COLOR_ID_BTN_TEXT,                    /* disabled text color            */
    0,                                       /* unchecked pixelmap id          */
    0,                                       /* checked pixelmap id            */
    0,                                       /* unchecked disabled pixelmap id */
    0                                        /* checked disabled pixelmap id   */
};
GX_CHECKBOX_PROPERTIES window_checkbox_compressed_properties =
{
    GX_STRING_ID_STRING_9,                   /* string id                      */
    GX_FONT_ID_BUTTON,                       /* font id                        */
    GX_COLOR_ID_BTN_TEXT,                    /* normal text color              */
    GX_COLOR_ID_BTN_TEXT,                    /* selected text color            */
    GX_COLOR_ID_BTN_TEXT,                    /* disabled text color            */
    0,                                       /* unchecked pixelmap id          */
    0,                                       /* checked pixelmap id            */
    0,                                       /* unchecked disabled pixelmap id */
    0                                        /* checked disabled pixelmap id   */
};

GX_CONST GX_STUDIO_WIDGET window_prompt_1_define =
{
    "prompt_1",
    GX_TYPE_PROMPT,                          /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN|GX_STYLE_ENABLED|GX_STYLE_TEXT_CENTER,   /* style flags */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_PROMPT),                       /* control block size             */
    GX_COLOR_ID_LIGHT_YELLOW,                /* normal color id                */
    GX_COLOR_ID_SELECTED_FILL,               /* selected color id              */
    GX_COLOR_ID_LIGHT_YELLOW,                /* disabled color id              */
    gx_studio_prompt_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {49, 29, 70, 161},                       /* widget size                    */
    GX_NULL,                                 /* no next widget                 */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(WINDOW_CONTROL_BLOCK, window_prompt_1), /* control block          */
    (void *) &window_prompt_1_properties     /* extended properties            */
};

GX_CONST GX_STUDIO_WIDGET window_prompt_8_define =
{
    "prompt_8",
    GX_TYPE_PROMPT,                          /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN|GX_STYLE_ENABLED|GX_STYLE_TEXT_CENTER,   /* style flags */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_PROMPT),                       /* control block size             */
    GX_COLOR_ID_LIGHT_YELLOW,                /* normal color id                */
    GX_COLOR_ID_SELECTED_FILL,               /* selected color id              */
    GX_COLOR_ID_LIGHT_YELLOW,                /* disabled color id              */
    gx_studio_prompt_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {153, 42, 232, 65},                      /* widget size                    */
    &window_prompt_1_define,                 /* next widget definition         */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(WINDOW_CONTROL_BLOCK, window_prompt_8), /* control block          */
    (void *) &window_prompt_8_properties     /* extended properties            */
};

GX_CONST GX_STUDIO_WIDGET window_prompt_7_define =
{
    "prompt_7",
    GX_TYPE_PROMPT,                          /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN|GX_STYLE_ENABLED|GX_STYLE_TEXT_CENTER,   /* style flags */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_PROMPT),                       /* control block size             */
    GX_COLOR_ID_LIGHT_YELLOW,                /* normal color id                */
    GX_COLOR_ID_SELECTED_FILL,               /* selected color id              */
    GX_COLOR_ID_LIGHT_YELLOW,                /* disabled color id              */
    gx_studio_prompt_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {140, 122, 203, 145},                    /* widget size                    */
    &window_prompt_8_define,                 /* next widget definition         */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(WINDOW_CONTROL_BLOCK, window_prompt_7), /* control block          */
    (void *) &window_prompt_7_properties     /* extended properties            */
};

GX_CONST GX_STUDIO_WIDGET window_prompt_6_define =
{
    "prompt_6",
    GX_TYPE_PROMPT,                          /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN|GX_STYLE_ENABLED|GX_STYLE_TEXT_CENTER,   /* style flags */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_PROMPT),                       /* control block size             */
    GX_COLOR_ID_LIGHT_YELLOW,                /* normal color id                */
    GX_COLOR_ID_SELECTED_FILL,               /* selected color id              */
    GX_COLOR_ID_LIGHT_YELLOW,                /* disabled color id              */
    gx_studio_prompt_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {77, 85, 200, 108},                      /* widget size                    */
    &window_prompt_7_define,                 /* next widget definition         */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(WINDOW_CONTROL_BLOCK, window_prompt_6), /* control block          */
    (void *) &window_prompt_6_properties     /* extended properties            */
};

GX_CONST GX_STUDIO_WIDGET window_prompt_5_define =
{
    "prompt_5",
    GX_TYPE_PROMPT,                          /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN|GX_STYLE_ENABLED|GX_STYLE_TEXT_CENTER,   /* style flags */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_PROMPT),                       /* control block size             */
    GX_COLOR_ID_LIGHT_YELLOW,                /* normal color id                */
    GX_COLOR_ID_SELECTED_FILL,               /* selected color id              */
    GX_COLOR_ID_LIGHT_YELLOW,                /* disabled color id              */
    gx_studio_prompt_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {79, 47, 138, 70},                       /* widget size                    */
    &window_prompt_6_define,                 /* next widget definition         */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(WINDOW_CONTROL_BLOCK, window_prompt_5), /* control block          */
    (void *) &window_prompt_5_properties     /* extended properties            */
};

GX_CONST GX_STUDIO_WIDGET window_checkbox_compressed_define =
{
    "checkbox_compressed",
    GX_TYPE_CHECKBOX,                        /* widget type                    */
    ID_CHECKBOX_COMPRESSED,                  /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_NONE|GX_STYLE_TRANSPARENT|GX_STYLE_ENABLED|GX_STYLE_BUTTON_TOGGLE|GX_STYLE_TEXT_LEFT,   /* style flags */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_CHECKBOX),                     /* control block size             */
    GX_COLOR_ID_BTN_LOWER,                   /* normal color id                */
    GX_COLOR_ID_BTN_UPPER,                   /* selected color id              */
    GX_COLOR_ID_BTN_LOWER,                   /* disabled color id              */
    gx_studio_checkbox_create,               /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {184, 204, 307, 227},                    /* widget size                    */
    GX_NULL,                                 /* no next widget                 */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(WINDOW_CONTROL_BLOCK, window_checkbox_compressed), /* control block */
    (void *) &window_checkbox_compressed_properties /* extended properties     */
};

GX_CONST GX_STUDIO_WIDGET window_checkbox_alpha_define =
{
    "checkbox_alpha",
    GX_TYPE_CHECKBOX,                        /* widget type                    */
    ID_CHECKBOX_ALPHA,                       /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_NONE|GX_STYLE_TRANSPARENT|GX_STYLE_ENABLED|GX_STYLE_BUTTON_TOGGLE|GX_STYLE_TEXT_LEFT,   /* style flags */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_CHECKBOX),                     /* control block size             */
    GX_COLOR_ID_BTN_LOWER,                   /* normal color id                */
    GX_COLOR_ID_BTN_UPPER,                   /* selected color id              */
    GX_COLOR_ID_BTN_LOWER,                   /* disabled color id              */
    gx_studio_checkbox_create,               /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {184, 176, 263, 199},                    /* widget size                    */
    &window_checkbox_compressed_define,      /* next widget definition         */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(WINDOW_CONTROL_BLOCK, window_checkbox_alpha), /* control block    */
    (void *) &window_checkbox_alpha_properties /* extended properties          */
};

GX_CONST GX_STUDIO_WIDGET window_pixelmap_window_define =
{
    "pixelmap_window",
    GX_TYPE_WINDOW,                          /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN|GX_STYLE_TRANSPARENT,   /* style flags                */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_WINDOW),                       /* control block size             */
    GX_COLOR_ID_WINDOW_FILL,                 /* normal color id                */
    GX_COLOR_ID_WINDOW_FILL,                 /* selected color id              */
    GX_COLOR_ID_WINDOW_FILL,                 /* disabled color id              */
    gx_studio_window_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {55, 30, 254, 162},                      /* widget size                    */
    &window_checkbox_alpha_define,           /* next widget definition         */
    &window_prompt_5_define,                 /* child widget definition        */
    offsetof(WINDOW_CONTROL_BLOCK, window_pixelmap_window), /* control block   */
    (void *) &window_pixelmap_window_properties /* extended properties         */
};

GX_CONST GX_STUDIO_WIDGET window_define =
{
    "window",
    GX_TYPE_WINDOW,                          /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN|GX_STYLE_TILE_WALLPAPER,   /* style flags             */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(WINDOW_CONTROL_BLOCK),            /* control block size             */
    GX_COLOR_ID_BTN_LOWER,                   /* normal color id                */
    GX_COLOR_ID_BTN_LOWER,                   /* selected color id              */
    GX_COLOR_ID_BTN_LOWER,                   /* disabled color id              */
    gx_studio_window_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    (UINT (*)(GX_WIDGET *, GX_EVENT *)) main_event_handler, /* event function override */
    {0, 0, 319, 239},                        /* widget size                    */
    GX_NULL,                                 /* next widget                    */
    &window_pixelmap_window_define,          /* child widget                   */
    0,                                       /* control block                  */
    (void *) &window_properties              /* extended properties            */
};
GX_CONST GX_STUDIO_WIDGET_ENTRY pixelmap_clip_32bpp_widget_table[] =
{
    { &window_define, (GX_WIDGET *) &window },
    {GX_NULL, GX_NULL}
};

static GX_WIDGET *gx_studio_nested_widget_create(GX_BYTE *control, GX_CONST GX_STUDIO_WIDGET *definition, GX_WIDGET *parent)
{
    UINT status = GX_SUCCESS;
    GX_WIDGET *widget = GX_NULL;
    GX_VALUE   list_count = 0;
    GX_VALUE   list_total_count = 0;

    if(parent && (parent->gx_widget_type == GX_TYPE_MENU))
    {
        list_total_count = ((GX_MENU *)parent)->gx_menu_list_total_count;
    }

    while(definition && status == GX_SUCCESS)
    {
        if (definition->create_function)
        {
            if (definition->style & GX_STYLE_DYNAMICALLY_ALLOCATED)
            {
                status = gx_widget_allocate(&widget, definition->control_block_size);
                if (status != GX_SUCCESS)
                {
                    return GX_NULL;
                }
            }
            else
            {
                if (control == GX_NULL)
                {
                    return GX_NULL;
                }
                widget = (GX_WIDGET *) (control + definition->control_block_offset);
            }

            status = definition->create_function(definition, widget, parent);

            if(list_count < list_total_count)
            {
                gx_menu_insert((GX_MENU *)parent, widget);
                ((GX_MENU *)parent)->gx_menu_list_total_count--;
                list_count++;
            }

            if (status == GX_SUCCESS)
            {
                if (definition->widget_type != GX_TYPE_TEMPLATE)
                {
#if defined(GUIX_5_4_0_COMPATIBILITY)
                    gx_widget_fill_color_set(widget, definition->normal_fill_color_id, definition->selected_fill_color_id);
#else
                    gx_widget_fill_color_set(widget, definition->normal_fill_color_id, definition->selected_fill_color_id, definition->disabled_fill_color_id);
#endif
                }

                if (!(definition->status & GX_STATUS_ACCEPTS_FOCUS))
                {
                    gx_widget_status_remove(widget, GX_STATUS_ACCEPTS_FOCUS);
                }

                if (definition->draw_function)
                {
                    gx_widget_draw_set(widget, definition->draw_function);
                }
                if (definition->event_function)
                {
                    gx_widget_event_process_set(widget, definition->event_function);
                }

                #if defined(GX_WIDGET_USER_DATA)
                widget->gx_widget_user_data = definition->user_data;
                #endif

                if (definition->child_widget)
                {
                    gx_studio_nested_widget_create(control, definition->child_widget, widget);
                }
            }
            definition = definition->next_widget;
        }
    }
    return widget;
}

GX_WIDGET *gx_studio_widget_create(GX_BYTE *control, GX_CONST GX_STUDIO_WIDGET *definition, GX_WIDGET *parent)
{
    GX_WIDGET *widget;
    widget = gx_studio_nested_widget_create(control, definition, GX_NULL);

    if (parent && widget)
    {
        gx_widget_attach(parent, widget);
    }
    return widget;
}

UINT gx_studio_named_widget_create(char *name, GX_WIDGET *parent, GX_WIDGET **new_widget)
{
    UINT status = GX_FAILURE;
    GX_CONST GX_STUDIO_WIDGET_ENTRY *entry = pixelmap_clip_32bpp_widget_table;
    GX_WIDGET *widget = GX_NULL;

    while(entry->widget_information)
    {
        if (!strcmp(name, entry->widget_information->widget_name))
        {
            widget = gx_studio_widget_create((GX_BYTE *) entry->widget, entry->widget_information, parent);
            if (widget)
            {
                status = GX_SUCCESS;
            }
            break;
        }
        entry++;
    }

    if (new_widget)
    {
        *new_widget = widget;
    }
    return status;
}


UINT gx_studio_display_configure(USHORT display, UINT (*driver)(GX_DISPLAY *),
    GX_UBYTE language, USHORT theme, GX_WINDOW_ROOT **return_root)
{
    GX_CONST GX_THEME *theme_ptr;
    GX_RECTANGLE size;

    GX_STUDIO_DISPLAY_INFO *display_info = &pixelmap_clip_32bpp_display_table[display];


/* create the requested display                                                */

    gx_display_create(display_info->display,
                      display_info->name,
                      driver,
                      (GX_VALUE) display_info->x_resolution,
                      (GX_VALUE) display_info->y_resolution);


/* install the request theme                                                   */

    if(display_info->theme_table)
    {
        theme_ptr = display_info->theme_table[theme];
        if(theme_ptr)
        {
            gx_display_color_table_set(display_info->display, theme_ptr->theme_color_table, theme_ptr->theme_color_table_size);
            
/* install the color palette if required                                       */
            if (display_info->display->gx_display_driver_palette_set &&
                theme_ptr->theme_palette != NULL)
            {
                display_info->display->gx_display_driver_palette_set(display_info->display, theme_ptr->theme_palette, theme_ptr->theme_palette_size);
            }

            gx_display_font_table_set(display_info->display, theme_ptr->theme_font_table, theme_ptr->theme_font_table_size);
            gx_display_pixelmap_table_set(display_info->display, theme_ptr->theme_pixelmap_table, theme_ptr->theme_pixelmap_table_size);
            gx_system_scroll_appearance_set(theme_ptr->theme_vertical_scroll_style, (GX_SCROLLBAR_APPEARANCE *) &theme_ptr->theme_vertical_scrollbar_appearance);
            gx_system_scroll_appearance_set(theme_ptr->theme_horizontal_scroll_style, (GX_SCROLLBAR_APPEARANCE *) &theme_ptr->theme_horizontal_scrollbar_appearance);
        }
    }

/* Install the language table.                                                 */

    if(display_info->language_table)
    {
        gx_display_language_table_set_ext(display_info->display, display_info->language_table, (GX_UBYTE) display_info->language_table_size, display_info->string_table_size);
        gx_display_active_language_set(display_info->display, language);
    }

/* Set screen rotation angle.                                                  */

    display_info->display->gx_display_rotation_angle = display_info->rotation_angle;

/* create the canvas for this display                                          */

    gx_canvas_create(display_info->canvas,
                     display_info->canvas_name,
                     display_info->display,
                     GX_CANVAS_MANAGED | GX_CANVAS_VISIBLE,
                     display_info->x_resolution,
                     display_info->y_resolution,
                     display_info->canvas_memory,
                     display_info->canvas_memory_size);

/* Create the root window for this canvas                                      */

    gx_utility_rectangle_define(&size,
                                0, 0,
                                (GX_VALUE) (display_info->x_resolution - 1),
                                (GX_VALUE) (display_info->y_resolution - 1));

    gx_window_root_create(display_info->root_window,
                          display_info->name,
                          display_info->canvas, GX_STYLE_NONE, 0, &size);
    if (return_root)
    {
        *return_root = display_info->root_window;
    }
    return GX_SUCCESS;
}
#undef GUIX_STUDIO_GENERATED_FILE
