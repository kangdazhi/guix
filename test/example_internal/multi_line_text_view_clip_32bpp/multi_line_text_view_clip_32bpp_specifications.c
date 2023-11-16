/*******************************************************************************/
/*  This file is auto-generated by Azure RTOS GUIX Studio. Do not edit this    */
/*  file by hand. Modifications to this file should only be made by running    */
/*  the Azure RTOS GUIX Studio application and re-generating the application   */
/*  specification file(s). For more information please refer to the Azure RTOS */
/*  GUIX Studio User Guide, or visit our web site at azure.com/rtos            */
/*                                                                             */
/*  GUIX Studio Revision 6.2.0.1                                               */
/*  Date (dd.mm.yyyy): 31.10.2022   Time (hh:mm): 14:10                        */
/*******************************************************************************/


#define GUIX_STUDIO_GENERATED_FILE
#include <stddef.h>
#include "multi_line_text_view_clip_32bpp_resources.h"
#include "multi_line_text_view_clip_32bpp_specifications.h"

static GX_WIDGET *gx_studio_nested_widget_create(GX_BYTE *control, GX_CONST GX_STUDIO_WIDGET *definition, GX_WIDGET *parent);
MAIN_WINDOW_CONTROL_BLOCK main_window;
GX_DISPLAY display_1_control_block;
GX_WINDOW_ROOT display_1_root_window;
GX_CANVAS  display_1_canvas_control_block;
ULONG      display_1_canvas_memory[76800];

extern GX_CONST GX_THEME *display_1_theme_table[];
extern GX_CONST GX_STRING *display_1_language_table[];

GX_STUDIO_DISPLAY_INFO multi_line_text_view_clip_32bpp_display_table[1] =
{
    {
    "display_1",
    "display_1_canvas",
    display_1_theme_table,
    display_1_language_table,
    DISPLAY_1_THEME_TABLE_SIZE,
    DISPLAY_1_LANGUAGE_TABLE_SIZE,
    DISPLAY_1_STRING_TABLE_SIZE,
    320,                                     /* x resolution                   */
    240,                                     /* y resolution                   */
    &display_1_control_block,
    &display_1_canvas_control_block,
    &display_1_root_window,
    display_1_canvas_memory,                 /* canvas memory area             */
    307200,                                  /* canvas memory size in bytes    */
    0                                        /* rotation angle                 */
    }
};


UINT gx_studio_slider_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent)
{
    UINT status;
    GX_SLIDER *slider = (GX_SLIDER *) control_block;
    GX_SLIDER_PROPERTIES *props = (GX_SLIDER_PROPERTIES *) info->properties;
    GX_SLIDER_INFO slider_info;
    slider_info.gx_slider_info_min_val = props->minval;
    slider_info.gx_slider_info_max_val = props->maxval;
    slider_info.gx_slider_info_current_val = props->current_val;
    slider_info.gx_slider_info_increment = props->increment;
    slider_info.gx_slider_info_min_travel = props->min_travel;
    slider_info.gx_slider_info_max_travel = props->max_travel;
    slider_info.gx_slider_info_needle_width = props->needle_width;
    slider_info.gx_slider_info_needle_height = props->needle_height;
    slider_info.gx_slider_info_needle_inset = props->needle_inset;
    slider_info.gx_slider_info_needle_hotspot_offset = props->needle_hotspot;
    status = gx_slider_create(slider,
                    info->widget_name,
                    parent,
                    props->tickmark_count,
                    &slider_info,
                    info->style,
                    info->widget_id,
                    &info->size);
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

UINT gx_studio_multi_line_text_view_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent)
{
    UINT status;
    GX_MULTI_LINE_TEXT_VIEW *view = (GX_MULTI_LINE_TEXT_VIEW *) control_block;
    GX_ML_TEXT_VIEW_PROPERTIES *props = (GX_ML_TEXT_VIEW_PROPERTIES *) info->properties;
    status = gx_multi_line_text_view_create(view, info->widget_name, parent, props->string_id, info->style, info->widget_id, &info->size);
    if (status == GX_SUCCESS)
    {
        gx_multi_line_text_view_font_set(view, props->font_id);
#if defined(GUIX_5_4_0_COMPATIBILITY)
        gx_multi_line_text_view_text_color_set(view, props->normal_text_color_id, props->selected_text_color_id);
#else
        gx_multi_line_text_view_text_color_set(view, props->normal_text_color_id, props->selected_text_color_id, props->disabled_text_color_id);
#endif
        gx_multi_line_text_view_whitespace_set(view, props->whitespace);
        gx_multi_line_text_view_line_space_set(view, props->line_space);
    }
    return status;
}
GX_WINDOW_PROPERTIES main_window_properties =
{
    0                                        /* wallpaper pixelmap id          */
};
GX_ML_TEXT_VIEW_PROPERTIES main_window_text_view_properties =
{
    GX_STRING_ID_STRING_1,                   /* string id                      */
    GX_FONT_ID_TEXT_INPUT,                   /* font id                        */
    GX_COLOR_ID_CANVAS,                      /* normal text color              */
    GX_COLOR_ID_CANVAS,                      /* selected text color            */
    GX_COLOR_ID_CANVAS,                      /* disabled text color            */
    0,                                       /* whitespace                     */
    0                                        /* line_space                     */
};
GX_WINDOW_PROPERTIES main_window_clip_1_properties =
{
    0                                        /* wallpaper pixelmap id          */
};
GX_SLIDER_PROPERTIES main_window_slider_1_properties =
{
    3,                                       /* tickmark count                 */
    0,                                       /* mimimun value                  */
    9,                                       /* maximum value                  */
    0,                                       /* current value                  */
    3,                                       /* increment                      */
    10,                                      /* minimum travel                 */
    10,                                      /* maximum travel                 */
    10,                                      /* needle width                   */
    5,                                       /* needle height                  */
    5,                                       /* needle inset                   */
    2                                        /* needle hotspot                 */
};
GX_SLIDER_PROPERTIES main_window_slider_2_properties =
{
    15,                                      /* tickmark count                 */
    0,                                       /* mimimun value                  */
    150,                                     /* maximum value                  */
    150,                                     /* current value                  */
    10,                                      /* increment                      */
    10,                                      /* minimum travel                 */
    10,                                      /* maximum travel                 */
    10,                                      /* needle width                   */
    5,                                       /* needle height                  */
    5,                                       /* needle inset                   */
    2                                        /* needle hotspot                 */
};
GX_PROMPT_PROPERTIES main_window_prompt_1_properties =
{
    GX_STRING_ID_STRING_6,                   /* string id                      */
    GX_FONT_ID_PROMPT,                       /* font id                        */
    GX_COLOR_ID_TEXT,                        /* normal text color              */
    GX_COLOR_ID_SELECTED_TEXT,               /* selected text color            */
    GX_COLOR_ID_TEXT                         /* disabled text color            */
};
GX_PROMPT_PROPERTIES main_window_prompt_2_properties =
{
    GX_STRING_ID_STRING_9,                   /* string id                      */
    GX_FONT_ID_PROMPT,                       /* font id                        */
    GX_COLOR_ID_TEXT,                        /* normal text color              */
    GX_COLOR_ID_SELECTED_TEXT,               /* selected text color            */
    GX_COLOR_ID_TEXT                         /* disabled text color            */
};
GX_WINDOW_PROPERTIES main_window_clip_2_properties =
{
    0                                        /* wallpaper pixelmap id          */
};
GX_SLIDER_PROPERTIES main_window_slider_3_properties =
{
    3,                                       /* tickmark count                 */
    0,                                       /* mimimun value                  */
    9,                                       /* maximum value                  */
    0,                                       /* current value                  */
    3,                                       /* increment                      */
    10,                                      /* minimum travel                 */
    10,                                      /* maximum travel                 */
    5,                                       /* needle width                   */
    10,                                      /* needle height                  */
    5,                                       /* needle inset                   */
    2                                        /* needle hotspot                 */
};
GX_PROMPT_PROPERTIES main_window_prompt_3_properties =
{
    GX_STRING_ID_STRING_7,                   /* string id                      */
    GX_FONT_ID_PROMPT,                       /* font id                        */
    GX_COLOR_ID_TEXT,                        /* normal text color              */
    GX_COLOR_ID_SELECTED_TEXT,               /* selected text color            */
    GX_COLOR_ID_TEXT                         /* disabled text color            */
};
GX_SLIDER_PROPERTIES main_window_slider_4_properties =
{
    19,                                      /* tickmark count                 */
    0,                                       /* mimimun value                  */
    190,                                     /* maximum value                  */
    0,                                       /* current value                  */
    10,                                      /* increment                      */
    10,                                      /* minimum travel                 */
    10,                                      /* maximum travel                 */
    5,                                       /* needle width                   */
    10,                                      /* needle height                  */
    5,                                       /* needle inset                   */
    2                                        /* needle hotspot                 */
};
GX_PROMPT_PROPERTIES main_window_prompt_4_properties =
{
    GX_STRING_ID_STRING_8,                   /* string id                      */
    GX_FONT_ID_PROMPT,                       /* font id                        */
    GX_COLOR_ID_TEXT,                        /* normal text color              */
    GX_COLOR_ID_SELECTED_TEXT,               /* selected text color            */
    GX_COLOR_ID_TEXT                         /* disabled text color            */
};

GX_CONST GX_STUDIO_WIDGET main_window_prompt_4_define =
{
    "prompt_4",
    GX_TYPE_PROMPT,                          /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_NONE|GX_STYLE_ENABLED|GX_STYLE_TEXT_CENTER,   /* style flags */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_PROMPT),                       /* control block size             */
    GX_COLOR_ID_BTN_LOWER,                   /* normal color id                */
    GX_COLOR_ID_SELECTED_FILL,               /* selected color id              */
    GX_COLOR_ID_BTN_LOWER,                   /* disabled color id              */
    gx_studio_prompt_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {250, 215, 315, 232},                    /* widget size                    */
    GX_NULL,                                 /* no next widget                 */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(MAIN_WINDOW_CONTROL_BLOCK, main_window_prompt_4), /* control block */
    (void *) &main_window_prompt_4_properties /* extended properties           */
};

GX_CONST GX_STUDIO_WIDGET main_window_slider_4_define =
{
    "slider_4",
    GX_TYPE_SLIDER,                          /* widget type                    */
    ID_HORIZONTAL_MOVE,                      /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_NONE|GX_STYLE_ENABLED|GX_STYLE_SHOW_NEEDLE|GX_STYLE_SHOW_TICKMARKS,   /* style flags */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_SLIDER),                       /* control block size             */
    GX_COLOR_ID_BTN_UPPER,                   /* normal color id                */
    GX_COLOR_ID_BTN_UPPER,                   /* selected color id              */
    GX_COLOR_ID_BTN_UPPER,                   /* disabled color id              */
    gx_studio_slider_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {100, 215, 239, 234},                    /* widget size                    */
    &main_window_prompt_4_define,            /* next widget definition         */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(MAIN_WINDOW_CONTROL_BLOCK, main_window_slider_4), /* control block */
    (void *) &main_window_slider_4_properties /* extended properties           */
};

GX_CONST GX_STUDIO_WIDGET main_window_prompt_3_define =
{
    "prompt_3",
    GX_TYPE_PROMPT,                          /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_NONE|GX_STYLE_ENABLED|GX_STYLE_TEXT_CENTER,   /* style flags */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_PROMPT),                       /* control block size             */
    GX_COLOR_ID_BTN_LOWER,                   /* normal color id                */
    GX_COLOR_ID_SELECTED_FILL,               /* selected color id              */
    GX_COLOR_ID_BTN_LOWER,                   /* disabled color id              */
    gx_studio_prompt_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {228, 188, 273, 209},                    /* widget size                    */
    &main_window_slider_4_define,            /* next widget definition         */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(MAIN_WINDOW_CONTROL_BLOCK, main_window_prompt_3), /* control block */
    (void *) &main_window_prompt_3_properties /* extended properties           */
};

GX_CONST GX_STUDIO_WIDGET main_window_slider_3_define =
{
    "slider_3",
    GX_TYPE_SLIDER,                          /* widget type                    */
    ID_CLIP_WIDTH,                           /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_NONE|GX_STYLE_ENABLED|GX_STYLE_SHOW_NEEDLE|GX_STYLE_SHOW_TICKMARKS,   /* style flags */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_SLIDER),                       /* control block size             */
    GX_COLOR_ID_BTN_UPPER,                   /* normal color id                */
    GX_COLOR_ID_BTN_UPPER,                   /* selected color id              */
    GX_COLOR_ID_BTN_UPPER,                   /* disabled color id              */
    gx_studio_slider_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {159, 190, 212, 209},                    /* widget size                    */
    &main_window_prompt_3_define,            /* next widget definition         */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(MAIN_WINDOW_CONTROL_BLOCK, main_window_slider_3), /* control block */
    (void *) &main_window_slider_3_properties /* extended properties           */
};

GX_CONST GX_STUDIO_WIDGET main_window_clip_2_define =
{
    "clip_2",
    GX_TYPE_WINDOW,                          /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN,                    /* style flags                    */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_WINDOW),                       /* control block size             */
    GX_COLOR_ID_SELECTED_TEXT,               /* normal color id                */
    GX_COLOR_ID_SELECTED_TEXT,               /* selected color id              */
    GX_COLOR_ID_SELECTED_TEXT,               /* disabled color id              */
    gx_studio_window_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {18, 35, 21, 165},                       /* widget size                    */
    &main_window_slider_3_define,            /* next widget definition         */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(MAIN_WINDOW_CONTROL_BLOCK, main_window_clip_2), /* control block  */
    (void *) &main_window_clip_2_properties  /* extended properties            */
};

GX_CONST GX_STUDIO_WIDGET main_window_prompt_2_define =
{
    "prompt_2",
    GX_TYPE_PROMPT,                          /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_NONE|GX_STYLE_ENABLED|GX_STYLE_TEXT_CENTER,   /* style flags */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_PROMPT),                       /* control block size             */
    GX_COLOR_ID_BTN_LOWER,                   /* normal color id                */
    GX_COLOR_ID_SELECTED_FILL,               /* selected color id              */
    GX_COLOR_ID_BTN_LOWER,                   /* disabled color id              */
    gx_studio_prompt_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {249, 15, 315, 32},                      /* widget size                    */
    &main_window_clip_2_define,              /* next widget definition         */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(MAIN_WINDOW_CONTROL_BLOCK, main_window_prompt_2), /* control block */
    (void *) &main_window_prompt_2_properties /* extended properties           */
};

GX_CONST GX_STUDIO_WIDGET main_window_prompt_1_define =
{
    "prompt_1",
    GX_TYPE_PROMPT,                          /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_NONE|GX_STYLE_ENABLED|GX_STYLE_TEXT_CENTER,   /* style flags */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_PROMPT),                       /* control block size             */
    GX_COLOR_ID_BTN_LOWER,                   /* normal color id                */
    GX_COLOR_ID_SELECTED_FILL,               /* selected color id              */
    GX_COLOR_ID_BTN_LOWER,                   /* disabled color id              */
    gx_studio_prompt_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {230, 42, 282, 63},                      /* widget size                    */
    &main_window_prompt_2_define,            /* next widget definition         */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(MAIN_WINDOW_CONTROL_BLOCK, main_window_prompt_1), /* control block */
    (void *) &main_window_prompt_1_properties /* extended properties           */
};

GX_CONST GX_STUDIO_WIDGET main_window_slider_2_define =
{
    "slider_2",
    GX_TYPE_SLIDER,                          /* widget type                    */
    ID_VERTICAL_MOVE,                        /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_NONE|GX_STYLE_ENABLED|GX_STYLE_SHOW_NEEDLE|GX_STYLE_SHOW_TICKMARKS|GX_STYLE_SLIDER_VERTICAL,   /* style flags */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_SLIDER),                       /* control block size             */
    GX_COLOR_ID_BTN_UPPER,                   /* normal color id                */
    GX_COLOR_ID_BTN_UPPER,                   /* selected color id              */
    GX_COLOR_ID_BTN_UPPER,                   /* disabled color id              */
    gx_studio_slider_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {287, 40, 306, 179},                     /* widget size                    */
    &main_window_prompt_1_define,            /* next widget definition         */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(MAIN_WINDOW_CONTROL_BLOCK, main_window_slider_2), /* control block */
    (void *) &main_window_slider_2_properties /* extended properties           */
};

GX_CONST GX_STUDIO_WIDGET main_window_slider_1_define =
{
    "slider_1",
    GX_TYPE_SLIDER,                          /* widget type                    */
    ID_CLIP_HEIGHT,                          /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_NONE|GX_STYLE_ENABLED|GX_STYLE_SHOW_NEEDLE|GX_STYLE_SHOW_TICKMARKS|GX_STYLE_SLIDER_VERTICAL,   /* style flags */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_SLIDER),                       /* control block size             */
    GX_COLOR_ID_BTN_UPPER,                   /* normal color id                */
    GX_COLOR_ID_BTN_UPPER,                   /* selected color id              */
    GX_COLOR_ID_BTN_UPPER,                   /* disabled color id              */
    gx_studio_slider_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {249, 75, 268, 128},                     /* widget size                    */
    &main_window_slider_2_define,            /* next widget definition         */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(MAIN_WINDOW_CONTROL_BLOCK, main_window_slider_1), /* control block */
    (void *) &main_window_slider_1_properties /* extended properties           */
};

GX_CONST GX_STUDIO_WIDGET main_window_clip_1_define =
{
    "clip_1",
    GX_TYPE_WINDOW,                          /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN,                    /* style flags                    */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_WINDOW),                       /* control block size             */
    GX_COLOR_ID_SELECTED_TEXT,               /* normal color id                */
    GX_COLOR_ID_SELECTED_TEXT,               /* selected color id              */
    GX_COLOR_ID_SELECTED_TEXT,               /* disabled color id              */
    gx_studio_window_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {28, 20, 207, 29},                       /* widget size                    */
    &main_window_slider_1_define,            /* next widget definition         */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(MAIN_WINDOW_CONTROL_BLOCK, main_window_clip_1), /* control block  */
    (void *) &main_window_clip_1_properties  /* extended properties            */
};

GX_CONST GX_STUDIO_WIDGET main_window_text_view_define =
{
    "text_view",
    GX_TYPE_MULTI_LINE_TEXT_VIEW,            /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN|GX_STYLE_ENABLED|GX_STYLE_TEXT_LEFT,   /* style flags */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_MULTI_LINE_TEXT_VIEW),         /* control block size             */
    GX_COLOR_ID_SELECTED_TEXT,               /* normal color id                */
    GX_COLOR_ID_SELECTED_TEXT,               /* selected color id              */
    GX_COLOR_ID_SELECTED_TEXT,               /* disabled color id              */
    gx_studio_multi_line_text_view_create,     /* create function              */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {38, 40, 197, 159},                      /* widget size                    */
    &main_window_clip_1_define,              /* next widget definition         */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(MAIN_WINDOW_CONTROL_BLOCK, main_window_text_view), /* control block */
    (void *) &main_window_text_view_properties /* extended properties          */
};

GX_CONST GX_STUDIO_WIDGET main_window_define =
{
    "main_window",
    GX_TYPE_WINDOW,                          /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN,                    /* style flags                    */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(MAIN_WINDOW_CONTROL_BLOCK),       /* control block size             */
    GX_COLOR_ID_BTN_LOWER,                   /* normal color id                */
    GX_COLOR_ID_BTN_LOWER,                   /* selected color id              */
    GX_COLOR_ID_BTN_LOWER,                   /* disabled color id              */
    gx_studio_window_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    (UINT (*)(GX_WIDGET *, GX_EVENT *)) main_event_handler, /* event function override */
    {0, 0, 319, 239},                        /* widget size                    */
    GX_NULL,                                 /* next widget                    */
    &main_window_text_view_define,           /* child widget                   */
    0,                                       /* control block                  */
    (void *) &main_window_properties         /* extended properties            */
};
GX_CONST GX_STUDIO_WIDGET_ENTRY multi_line_text_view_clip_32bpp_widget_table[] =
{
    { &main_window_define, (GX_WIDGET *) &main_window },
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
    GX_CONST GX_STUDIO_WIDGET_ENTRY *entry = multi_line_text_view_clip_32bpp_widget_table;
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

    GX_STUDIO_DISPLAY_INFO *display_info = &multi_line_text_view_clip_32bpp_display_table[display];


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
