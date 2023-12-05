/*******************************************************************************/
/*  This file is auto-generated by Azure RTOS GUIX Studio. Do not edit this    */
/*  file by hand. Modifications to this file should only be made by running    */
/*  the Azure RTOS GUIX Studio application and re-generating the application   */
/*  specification file(s). For more information please refer to the Azure RTOS */
/*  GUIX Studio User Guide, or visit our web site at azure.com/rtos            */
/*                                                                             */
/*  GUIX Studio Revision 6.1.12.0                                              */
/*  Date (dd.mm.yyyy):  1. 9.2022   Time (hh:mm): 20:27                        */
/*******************************************************************************/


#define GUIX_STUDIO_GENERATED_FILE
#include <stddef.h>
#include "test_project_import_target_main_display_resources.h"
#include "test_project_import_target_second_display_resources.h"
#include "test_project_import_target_specifications.h"

static GX_WIDGET *gx_studio_nested_widget_create(GX_BYTE *control, GX_CONST GX_STUDIO_WIDGET *definition, GX_WIDGET *parent);
MAIN_DISPLAY_WINDOW_1_CONTROL_BLOCK main_display_window_1;
MAIN_DISPLAY_DERIVED_CONTROL_BLOCK main_display_derived;
MAIN_DISPLAY_WINDOW_CONTROL_BLOCK main_display_window;
MAIN_DISPLAY_DERIVED_2_CONTROL_BLOCK main_display_derived_2;
MAIN_DISPLAY_DERIVED_1_CONTROL_BLOCK main_display_derived_1;
GX_DISPLAY main_display_control_block;
GX_WINDOW_ROOT main_display_root_window;
GX_CANVAS  main_display_canvas_control_block;
ULONG      main_display_canvas_memory[153600];

GX_DISPLAY second_display_control_block;
GX_WINDOW_ROOT second_display_root_window;
GX_CANVAS  second_display_canvas_control_block;
ULONG      second_display_canvas_memory[153600];

extern GX_CONST GX_THEME *main_display_theme_table[];
extern GX_CONST GX_STRING *main_display_language_table[];
extern GX_CONST GX_THEME *second_display_theme_table[];
extern GX_CONST GX_STRING *second_display_language_table[];

GX_STUDIO_DISPLAY_INFO test_project_import_target_display_table[2] =
{
    {
    "main_display",
    "main_display_canvas",
    main_display_theme_table,
    main_display_language_table,
    MAIN_DISPLAY_THEME_TABLE_SIZE,
    MAIN_DISPLAY_LANGUAGE_TABLE_SIZE,
    MAIN_DISPLAY_STRING_TABLE_SIZE,
    640,                                     /* x resolution                   */
    480,                                     /* y resolution                   */
    &main_display_control_block,
    &main_display_canvas_control_block,
    &main_display_root_window,
    main_display_canvas_memory,              /* canvas memory area             */
    614400,                                  /* canvas memory size in bytes    */
    GX_SCREEN_ROTATION_NONE                  /* rotation angle                 */
    },
    {
    "second_display",
    "second_display_canvas",
    second_display_theme_table,
    second_display_language_table,
    SECOND_DISPLAY_THEME_TABLE_SIZE,
    SECOND_DISPLAY_LANGUAGE_TABLE_SIZE,
    SECOND_DISPLAY_STRING_TABLE_SIZE,
    640,                                     /* x resolution                   */
    480,                                     /* y resolution                   */
    &second_display_control_block,
    &second_display_canvas_control_block,
    &second_display_root_window,
    second_display_canvas_memory,            /* canvas memory area             */
    614400,                                  /* canvas memory size in bytes    */
    GX_SCREEN_ROTATION_NONE                  /* rotation angle                 */
    }
};


UINT gx_studio_button_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent)
{
    UINT status;
    GX_BUTTON *button = (GX_BUTTON *) control_block;
    status = gx_button_create(button, info->widget_name, parent, info->style, info->widget_id, &info->size);
    return status;
}

UINT gx_studio_text_button_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent)
{
    UINT status;
    GX_TEXT_BUTTON *button = (GX_TEXT_BUTTON *) control_block;
    GX_TEXT_BUTTON_PROPERTIES *props = (GX_TEXT_BUTTON_PROPERTIES *) info->properties;
    status = gx_text_button_create(button, info->widget_name, parent, props->string_id, info->style, info->widget_id, &info->size);
    if (status == GX_SUCCESS)
    {
        gx_text_button_font_set(button, props->font_id);
#if defined(GUIX_5_4_0_COMPATIBILITY)
        gx_text_button_text_color_set(button, props->normal_text_color_id, props->selected_text_color_id);
#else
        gx_text_button_text_color_set(button, props->normal_text_color_id, props->selected_text_color_id, props->disabled_text_color_id);
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

UINT gx_studio_template_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent)
{
    UINT status = GX_SUCCESS;
    GX_STUDIO_WIDGET derived;
    GX_TEMPLATE_PROPERTIES *props = (GX_TEMPLATE_PROPERTIES *) info->properties;

                                             /* create base widget and children */ 
    derived =            *props->base_info;
    derived.widget_id =   info->widget_id;
    derived.widget_name = info->widget_name;

    if (info->style & GX_STYLE_ENABLED)
    {
        derived.style |= GX_STYLE_ENABLED;
    }
    else
    {
        derived.style &= ~GX_STYLE_ENABLED;
    }
    if (info->status & GX_STATUS_ACCEPTS_FOCUS)
    {
        derived.status |= GX_STATUS_ACCEPTS_FOCUS;
    }
    else
    {
        derived.status &= ~GX_STATUS_ACCEPTS_FOCUS;
    }

    #if defined(GX_WIDGET_USER_DATA)
    derived.user_data =   info->user_data;
    #endif

    control_block = gx_studio_widget_create((GX_BYTE *) control_block, &derived, parent);
    if (control_block)
    {
        if (info->style & GX_STYLE_DYNAMICALLY_ALLOCATED)
        {
            control_block->gx_widget_status |= GX_STATUS_DYNAMICALLY_ALLOCATED;
        }
        if (derived.size.gx_rectangle_left != info->size.gx_rectangle_left ||
            derived.size.gx_rectangle_top != info->size.gx_rectangle_top)
        {
            gx_widget_shift(control_block,
                info->size.gx_rectangle_left - derived.size.gx_rectangle_left,
                info->size.gx_rectangle_top - derived.size.gx_rectangle_top, GX_FALSE);
        }
    }
    else
    {
        status = GX_FAILURE;
    }
    return status;
}
GX_WINDOW_PROPERTIES main_display_window_1_properties =
{
    0                                        /* wallpaper pixelmap id          */
};

GX_CONST GX_STUDIO_WIDGET main_display_window_1_button_define =
{
    "button",
    GX_TYPE_BUTTON,                          /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_RAISED|GX_STYLE_ENABLED,   /* style flags                  */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_BUTTON),                       /* control block size             */
    GX_COLOR_ID_BTN_LOWER,                   /* normal color id                */
    GX_COLOR_ID_BTN_UPPER,                   /* selected color id              */
    GX_COLOR_ID_DISABLED_FILL,               /* disabled color id              */
    gx_studio_button_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {280, 228, 359, 251},                    /* widget size                    */
    GX_NULL,                                 /* no next widget                 */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(MAIN_DISPLAY_WINDOW_1_CONTROL_BLOCK, main_display_window_1_button), /* control block */
    (void *) GX_NULL                         /* no extended properties         */
};

GX_CONST GX_STUDIO_WIDGET main_display_window_1_define =
{
    "main_display_window_1",
    GX_TYPE_WINDOW,                          /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN|GX_STYLE_ENABLED,   /* style flags                    */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(MAIN_DISPLAY_WINDOW_1_CONTROL_BLOCK), /* control block size         */
    GX_COLOR_ID_WINDOW_FILL,                 /* normal color id                */
    GX_COLOR_ID_WINDOW_FILL,                 /* selected color id              */
    GX_COLOR_ID_DISABLED_FILL,               /* disabled color id              */
    gx_studio_window_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {160, 120, 479, 359},                    /* widget size                    */
    GX_NULL,                                 /* next widget                    */
    &main_display_window_1_button_define,    /* child widget                   */
    0,                                       /* control block                  */
    (void *) &main_display_window_1_properties /* extended properties          */
};
GX_WINDOW_PROPERTIES main_display_window_properties =
{
    0                                        /* wallpaper pixelmap id          */
};

GX_CONST GX_STUDIO_WIDGET main_display_window_button_define =
{
    "button",
    GX_TYPE_BUTTON,                          /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_RAISED|GX_STYLE_ENABLED,   /* style flags                  */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_BUTTON),                       /* control block size             */
    GX_COLOR_ID_BTN_LOWER,                   /* normal color id                */
    GX_COLOR_ID_BTN_UPPER,                   /* selected color id              */
    GX_COLOR_ID_DISABLED_FILL,               /* disabled color id              */
    gx_studio_button_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {280, 228, 359, 251},                    /* widget size                    */
    GX_NULL,                                 /* no next widget                 */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(MAIN_DISPLAY_WINDOW_CONTROL_BLOCK, main_display_window_button), /* control block */
    (void *) GX_NULL                         /* no extended properties         */
};

GX_CONST GX_STUDIO_WIDGET main_display_window_define =
{
    "main_display_window",
    GX_TYPE_WINDOW,                          /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN|GX_STYLE_ENABLED,   /* style flags                    */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(MAIN_DISPLAY_WINDOW_CONTROL_BLOCK), /* control block size           */
    GX_COLOR_ID_WINDOW_FILL,                 /* normal color id                */
    GX_COLOR_ID_WINDOW_FILL,                 /* selected color id              */
    GX_COLOR_ID_DISABLED_FILL,               /* disabled color id              */
    gx_studio_window_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {160, 120, 479, 359},                    /* widget size                    */
    GX_NULL,                                 /* next widget                    */
    &main_display_window_button_define,      /* child widget                   */
    0,                                       /* control block                  */
    (void *) &main_display_window_properties /* extended properties            */
};
GX_WINDOW_PROPERTIES main_display_base_properties =
{
    GX_PIXELMAP_ID_MAIN_DISPLAY_RED_APPLE    /* wallpaper pixelmap id          */
};

GX_CONST GX_STUDIO_WIDGET main_display_base_define =
{
    "main_display_base",
    GX_TYPE_WINDOW,                          /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN|GX_STYLE_ENABLED,   /* style flags                    */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(MAIN_DISPLAY_BASE_CONTROL_BLOCK), /* control block size             */
    GX_COLOR_ID_WINDOW_FILL,                 /* normal color id                */
    GX_COLOR_ID_WINDOW_FILL,                 /* selected color id              */
    GX_COLOR_ID_DISABLED_FILL,               /* disabled color id              */
    gx_studio_window_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {0, 0, 639, 479},                        /* widget size                    */
    GX_NULL,                                 /* next widget                    */
    GX_NULL,                                 /* child widget                   */
    0,                                       /* control block                  */
    (void *) &main_display_base_properties   /* extended properties            */
};
GX_TEMPLATE_PROPERTIES main_display_base_0_properties =
{
    &main_display_base_define,               /* base info                      */
    gx_studio_window_create,                 /* base create function           */
    {0, 0, 639, 479}                         /* widget size                    */
};
GX_TEXT_BUTTON_PROPERTIES main_display_base_0_button_properties =
{
    GX_STRING_ID_MAIN_DISPLAY_TEST_STRING_ID_1, /* string id                   */
    GX_FONT_ID_MAIN_DISPLAY_NORMAL_FONT,     /* font id                        */
    GX_COLOR_ID_BTN_TEXT,                    /* normal text color              */
    GX_COLOR_ID_BTN_TEXT,                    /* selected text color            */
    GX_COLOR_ID_DISABLED_TEXT                /* disabled text color            */
};

GX_CONST GX_STUDIO_WIDGET main_display_base_0_button_define =
{
    "button",
    GX_TYPE_TEXT_BUTTON,                     /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_RAISED|GX_STYLE_ENABLED|GX_STYLE_TEXT_CENTER,   /* style flags */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_TEXT_BUTTON),                  /* control block size             */
    GX_COLOR_ID_MAIN_DISPLAY_GREEN,          /* normal color id                */
    GX_COLOR_ID_MAIN_DISPLAY_RED,            /* selected color id              */
    GX_COLOR_ID_DISABLED_FILL,               /* disabled color id              */
    gx_studio_text_button_create,            /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {293, 31, 571, 181},                     /* widget size                    */
    GX_NULL,                                 /* no next widget                 */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(MAIN_DISPLAY_BASE_0_CONTROL_BLOCK, main_display_base_0_button), /* control block */
    (void *) &main_display_base_0_button_properties /* extended properties     */
};

GX_CONST GX_STUDIO_WIDGET main_display_base_0_define =
{
    "main_display_base_0",
    GX_TYPE_TEMPLATE,                        /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN|GX_STYLE_ENABLED,   /* style flags                    */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(MAIN_DISPLAY_BASE_0_CONTROL_BLOCK), /* control block size           */
    GX_COLOR_ID_WINDOW_FILL,                 /* normal color id                */
    GX_COLOR_ID_WINDOW_FILL,                 /* selected color id              */
    GX_COLOR_ID_DISABLED_FILL,               /* disabled color id              */
    gx_studio_template_create,               /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {0, 0, 639, 479},                        /* widget size                    */
    GX_NULL,                                 /* next widget                    */
    &main_display_base_0_button_define,      /* child widget                   */
    0,                                       /* control block                  */
    (void *) &main_display_base_0_properties /* extended properties            */
};
GX_TEMPLATE_PROPERTIES main_display_base_1_properties =
{
    &main_display_base_0_define,             /* base info                      */
    gx_studio_template_create,               /* base create function           */
    {0, 0, 639, 479}                         /* widget size                    */
};
GX_TEXT_BUTTON_PROPERTIES main_display_base_1_button_1_properties =
{
    GX_STRING_ID_MAIN_DISPLAY_TEST_STRING_ID_2, /* string id                   */
    GX_FONT_ID_MAIN_DISPLAY_MIDDLE_FONT,     /* font id                        */
    GX_COLOR_ID_BTN_TEXT,                    /* normal text color              */
    GX_COLOR_ID_BTN_TEXT,                    /* selected text color            */
    GX_COLOR_ID_DISABLED_TEXT                /* disabled text color            */
};

GX_CONST GX_STUDIO_WIDGET main_display_base_1_button_1_define =
{
    "button_1",
    GX_TYPE_TEXT_BUTTON,                     /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_RAISED|GX_STYLE_ENABLED|GX_STYLE_TEXT_CENTER,   /* style flags */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_TEXT_BUTTON),                  /* control block size             */
    GX_COLOR_ID_BTN_LOWER,                   /* normal color id                */
    GX_COLOR_ID_BTN_UPPER,                   /* selected color id              */
    GX_COLOR_ID_DISABLED_FILL,               /* disabled color id              */
    gx_studio_text_button_create,            /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {288, 235, 591, 412},                    /* widget size                    */
    GX_NULL,                                 /* no next widget                 */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(MAIN_DISPLAY_BASE_1_CONTROL_BLOCK, main_display_base_1_button_1), /* control block */
    (void *) &main_display_base_1_button_1_properties /* extended properties   */
};

GX_CONST GX_STUDIO_WIDGET main_display_base_1_define =
{
    "main_display_base_1",
    GX_TYPE_TEMPLATE,                        /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN|GX_STYLE_ENABLED,   /* style flags                    */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(MAIN_DISPLAY_BASE_1_CONTROL_BLOCK), /* control block size           */
    GX_COLOR_ID_WINDOW_FILL,                 /* normal color id                */
    GX_COLOR_ID_WINDOW_FILL,                 /* selected color id              */
    GX_COLOR_ID_DISABLED_FILL,               /* disabled color id              */
    gx_studio_template_create,               /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {0, 0, 639, 479},                        /* widget size                    */
    GX_NULL,                                 /* next widget                    */
    &main_display_base_1_button_1_define,    /* child widget                   */
    0,                                       /* control block                  */
    (void *) &main_display_base_1_properties /* extended properties            */
};
GX_TEMPLATE_PROPERTIES main_display_derived_2_properties =
{
    &main_display_base_1_define,             /* base info                      */
    gx_studio_template_create,               /* base create function           */
    {0, 0, 639, 479}                         /* widget size                    */
};

GX_CONST GX_STUDIO_WIDGET main_display_derived_2_define =
{
    "main_display_derived_2",
    GX_TYPE_TEMPLATE,                        /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN|GX_STYLE_ENABLED,   /* style flags                    */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(MAIN_DISPLAY_DERIVED_2_CONTROL_BLOCK), /* control block size        */
    GX_COLOR_ID_WINDOW_FILL,                 /* normal color id                */
    GX_COLOR_ID_WINDOW_FILL,                 /* selected color id              */
    GX_COLOR_ID_DISABLED_FILL,               /* disabled color id              */
    gx_studio_template_create,               /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {0, 0, 639, 479},                        /* widget size                    */
    GX_NULL,                                 /* next widget                    */
    GX_NULL,                                 /* child widget                   */
    0,                                       /* control block                  */
    (void *) &main_display_derived_2_properties /* extended properties         */
};
GX_TEMPLATE_PROPERTIES main_display_derived_1_properties =
{
    &main_display_base_1_define,             /* base info                      */
    gx_studio_template_create,               /* base create function           */
    {0, 0, 639, 479}                         /* widget size                    */
};

GX_CONST GX_STUDIO_WIDGET main_display_derived_1_define =
{
    "main_display_derived_1",
    GX_TYPE_TEMPLATE,                        /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN|GX_STYLE_ENABLED,   /* style flags                    */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(MAIN_DISPLAY_DERIVED_1_CONTROL_BLOCK), /* control block size        */
    GX_COLOR_ID_WINDOW_FILL,                 /* normal color id                */
    GX_COLOR_ID_WINDOW_FILL,                 /* selected color id              */
    GX_COLOR_ID_DISABLED_FILL,               /* disabled color id              */
    gx_studio_template_create,               /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {0, 0, 639, 479},                        /* widget size                    */
    GX_NULL,                                 /* next widget                    */
    GX_NULL,                                 /* child widget                   */
    0,                                       /* control block                  */
    (void *) &main_display_derived_1_properties /* extended properties         */
};
GX_TEMPLATE_PROPERTIES main_display_derived_properties =
{
    &main_display_base_1_define,             /* base info                      */
    gx_studio_template_create,               /* base create function           */
    {0, 0, 639, 479}                         /* widget size                    */
};

GX_CONST GX_STUDIO_WIDGET main_display_derived_define =
{
    "main_display_derived",
    GX_TYPE_TEMPLATE,                        /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN|GX_STYLE_ENABLED,   /* style flags                    */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(MAIN_DISPLAY_DERIVED_CONTROL_BLOCK), /* control block size          */
    GX_COLOR_ID_WINDOW_FILL,                 /* normal color id                */
    GX_COLOR_ID_WINDOW_FILL,                 /* selected color id              */
    GX_COLOR_ID_DISABLED_FILL,               /* disabled color id              */
    gx_studio_template_create,               /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {0, 0, 639, 479},                        /* widget size                    */
    GX_NULL,                                 /* next widget                    */
    GX_NULL,                                 /* child widget                   */
    0,                                       /* control block                  */
    (void *) &main_display_derived_properties /* extended properties           */
};
GX_CONST GX_STUDIO_WIDGET_ENTRY test_project_import_target_widget_table[] =
{
    { &main_display_window_1_define, (GX_WIDGET *) &main_display_window_1 },
    { &main_display_derived_define, (GX_WIDGET *) &main_display_derived },
    { &main_display_window_define, (GX_WIDGET *) &main_display_window },
    { &main_display_derived_2_define, (GX_WIDGET *) &main_display_derived_2 },
    { &main_display_derived_1_define, (GX_WIDGET *) &main_display_derived_1 },
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
    GX_CONST GX_STUDIO_WIDGET_ENTRY *entry = test_project_import_target_widget_table;
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

    GX_STUDIO_DISPLAY_INFO *display_info = &test_project_import_target_display_table[display];


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
