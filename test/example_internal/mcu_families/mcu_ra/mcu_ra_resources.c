/*******************************************************************************/
/*  This file is auto-generated by Azure RTOS GUIX Studio. Do not edit this    */
/*  file by hand. Modifications to this file should only be made by running    */
/*  the Azure RTOS GUIX Studio application and re-generating the application   */
/*  resource file(s). For more information please refer to the Azure RTOS GUIX */
/*  Studio User Guide, or visit our web site at azure.com/rtos                 */
/*                                                                             */
/*  GUIX Studio Revision 6.3.0.0                                               */
/*  Date (dd.mm.yyyy): 27.11.2023   Time (hh:mm): 09:58                        */
/*******************************************************************************/


#include "gx_api.h"
#include "mcu_ra_resources.h"

/* Color Table                                                                 */

GX_CONST GX_COLOR display_1_theme_1_color_table[] =
{
    0x00000000,
    0x00007bef,
    0x0000e71c,
    0x00009cce,
    0x000074d5,
    0x00000000,
    0x0000ffff,
    0x00000017,
    0x00008410,
    0x0000dedb,
    0x0000e60c,
    0x0000ffdc,
    0x0000ff76,
    0x00000000,
    0x0000bdd7,
    0x00007bef,
    0x0000ffff,
    0x0000e71c,
    0x00000000,
    0x0000c618,
    0x0000ffff,
    0x00000000,
    0x00008410,
    0x0000c618,
    0x0000e60c,
    0x0000a514,
    0x00007bef,
    0x0000ffff,
    0x00007bef
};


/* Font Table                                                                  */


extern GX_CONST GX_FONT _gx_system_font_8bpp;

extern GX_CONST GX_FONT _gx_dave2d_system_font_4bpp;

extern GX_CONST GX_FONT _gx_dave2d_system_font_mono;
GX_CONST GX_FONT *display_1_theme_1_font_table[] =
{
    &_gx_dave2d_system_font_mono,
    &_gx_system_font_8bpp,
    &_gx_system_font_8bpp,
    &_gx_dave2d_system_font_4bpp
};

/* Pixelmap data definitions                                                   */


/* THEME_1_RADIO_ON pixelmap data                                              */

#ifdef WIN32
static GX_CONST GX_UBYTE DISPLAY_1_THEME_1_RADIO_ON_pixelmap_data[660] =
#else
static GX_CONST GX_UBYTE DISPLAY_1_THEME_1_RADIO_ON_pixelmap_data[660] __attribute__((aligned(4))) =
#endif
{
    0x83, 0xf8, 0xfc, 0xf8, 0x00, 0x07, 0xf8, 0xf4, 0xf0, 0x80, 0xd0, 0xc0, 0xa8, 
    0xcc, 0xb0, 0x98, 0x78, 0xff, 0xa8, 0x90, 0x68, 0xff, 0xb0, 0x94, 0x70, 0xff, 
    0xb8, 0xa0, 0x80, 0xff, 0xd0, 0xc4, 0xb0, 0xa3, 0xf8, 0xf8, 0xf8, 0x00, 0x83, 
    0xf8, 0xfc, 0xf8, 0x00, 0x82, 0xf8, 0xfc, 0xf8, 0x00, 0x09, 0xe0, 0xdc, 0xd0, 
    0x80, 0xb0, 0x90, 0x70, 0xff, 0x90, 0xbc, 0xd8, 0xff, 0x68, 0xb4, 0xf8, 0xff, 
    0x58, 0xb0, 0xf8, 0xff, 0x58, 0xb0, 0xf8, 0xff, 0x68, 0xb8, 0xf8, 0xff, 0x98, 
    0xb8, 0xd0, 0xff, 0xb0, 0x90, 0x70, 0xff, 0xe8, 0xe4, 0xe0, 0x80, 0x82, 0xf8, 
    0xfc, 0xf8, 0x00, 0x0f, 0xf8, 0xfc, 0xf8, 0x00, 0xf8, 0xfc, 0xf8, 0x00, 0xd0, 
    0xc4, 0xb0, 0xcc, 0xa8, 0xb0, 0xb0, 0xff, 0x60, 0xb4, 0xf8, 0xff, 0x48, 0xd8, 
    0xa0, 0xff, 0x38, 0xe8, 0x70, 0xff, 0x00, 0xe8, 0x48, 0xff, 0x00, 0xe8, 0x48, 
    0xff, 0x30, 0xe8, 0x70, 0xff, 0x40, 0xd8, 0xa0, 0xff, 0x68, 0xb8, 0xf8, 0xff, 
    0xa8, 0xa4, 0x98, 0xff, 0xd8, 0xd0, 0xc0, 0xcc, 0xf8, 0xfc, 0xf8, 0x00, 0xf8, 
    0xfc, 0xf8, 0x00, 0x04, 0xf8, 0xfc, 0xf8, 0x00, 0xe0, 0xdc, 0xd0, 0x80, 0xa8, 
    0xb4, 0xb8, 0xff, 0x58, 0xb0, 0xf8, 0xff, 0x38, 0xec, 0x70, 0xff, 0x85, 0x00, 
    0xe8, 0x48, 0xff, 0x04, 0x38, 0xe8, 0x70, 0xff, 0x58, 0xb0, 0xf8, 0xff, 0xb0, 
    0xa8, 0x98, 0xff, 0xf0, 0xe8, 0xe0, 0x80, 0xf8, 0xfc, 0xf8, 0x00, 0x03, 0xf8, 
    0xf4, 0xf0, 0x33, 0xb0, 0x98, 0x78, 0xff, 0x68, 0xb8, 0xf8, 0xff, 0x38, 0xec, 
    0x70, 0xff, 0x87, 0x00, 0xe8, 0x48, 0xff, 0x03, 0x38, 0xe8, 0x70, 0xff, 0x68, 
    0xb8, 0xf8, 0xff, 0xb0, 0x94, 0x70, 0xff, 0xf8, 0xfc, 0xf8, 0x00, 0x02, 0xd0, 
    0xc0, 0xa8, 0xcc, 0x98, 0xc0, 0xe0, 0xff, 0x50, 0xdc, 0xa0, 0xff, 0x89, 0x00, 
    0xe8, 0x48, 0xff, 0x02, 0x80, 0xc4, 0xf8, 0xff, 0xa8, 0xbc, 0xc8, 0xff, 0xe0, 
    0xd4, 0xc8, 0xa4, 0x02, 0xb8, 0xa4, 0x88, 0xff, 0x68, 0xb8, 0xf8, 0xff, 0x38, 
    0xec, 0x70, 0xff, 0x89, 0x00, 0xe8, 0x48, 0xff, 0x02, 0x60, 0xe4, 0xa0, 0xff, 
    0x80, 0xc0, 0xf8, 0xff, 0xc8, 0xb0, 0x98, 0xff, 0x01, 0xb8, 0xa4, 0x88, 0xff, 
    0x68, 0xb8, 0xf8, 0xff, 0x8b, 0x00, 0xe8, 0x48, 0xff, 0x01, 0x68, 0xb8, 0xf8, 
    0xff, 0xb8, 0xa4, 0x88, 0xff, 0x01, 0xb8, 0xa0, 0x80, 0xff, 0x68, 0xb8, 0xf8, 
    0xff, 0x8b, 0x00, 0xe8, 0x48, 0xff, 0x01, 0x60, 0xb4, 0xf8, 0xff, 0xb8, 0xa0, 
    0x80, 0xff, 0x02, 0xb8, 0xa0, 0x80, 0xff, 0x68, 0xb8, 0xf8, 0xff, 0x38, 0xec, 
    0x70, 0xff, 0x89, 0x00, 0xe8, 0x48, 0xff, 0x02, 0x18, 0xe8, 0x60, 0xff, 0x80, 
    0xc0, 0xf8, 0xff, 0xc8, 0xb0, 0x98, 0xff, 0x02, 0xd0, 0xc0, 0xa8, 0xcc, 0x98, 
    0xc0, 0xe0, 0xff, 0x28, 0xe4, 0x70, 0xff, 0x89, 0x00, 0xe8, 0x48, 0xff, 0x02, 
    0x80, 0xc4, 0xf8, 0xff, 0xa8, 0xbc, 0xc8, 0xff, 0xe0, 0xd4, 0xc8, 0x83, 0x03, 
    0xf8, 0xf4, 0xf0, 0x00, 0xb0, 0x98, 0x78, 0xff, 0x68, 0xb8, 0xf8, 0xff, 0x20, 
    0xe8, 0x60, 0xff, 0x87, 0x00, 0xe8, 0x48, 0xff, 0x03, 0x38, 0xe8, 0x70, 0xff, 
    0x68, 0xb8, 0xf8, 0xff, 0xb0, 0x94, 0x70, 0xff, 0xf8, 0xfc, 0xf8, 0x00, 0x04, 
    0xf8, 0xfc, 0xf8, 0x00, 0xe0, 0xdc, 0xd0, 0xcc, 0xa8, 0xb4, 0xb8, 0xff, 0x58, 
    0xb0, 0xf8, 0xff, 0x18, 0xe8, 0x60, 0xff, 0x85, 0x00, 0xe8, 0x48, 0xff, 0x04, 
    0x38, 0xe8, 0x70, 0xff, 0x58, 0xb0, 0xf8, 0xff, 0xb0, 0xa8, 0x98, 0xff, 0xf0, 
    0xe8, 0xe0, 0x80, 0xf8, 0xfc, 0xf8, 0x00, 0x0f, 0xf8, 0xfc, 0xf8, 0x00, 0xf8, 
    0xfc, 0xf8, 0x00, 0xd0, 0xc4, 0xb0, 0xcc, 0xa8, 0xb0, 0xb0, 0xff, 0x60, 0xb4, 
    0xf8, 0xff, 0x48, 0xd8, 0xa0, 0xff, 0x30, 0xe8, 0x70, 0xff, 0x00, 0xe8, 0x48, 
    0xff, 0x00, 0xe8, 0x48, 0xff, 0x30, 0xe8, 0x70, 0xff, 0x80, 0xc4, 0xf8, 0xff, 
    0x60, 0xb4, 0xf8, 0xff, 0xa8, 0xa4, 0x98, 0xff, 0xd8, 0xd0, 0xc0, 0xcc, 0xf8, 
    0xfc, 0xf8, 0x00, 0xf8, 0xfc, 0xf8, 0x00, 0x82, 0xf8, 0xfc, 0xf8, 0x00, 0x09, 
    0xe0, 0xdc, 0xd0, 0xcc, 0xb0, 0x90, 0x70, 0xff, 0x90, 0xbc, 0xd8, 0xff, 0x68, 
    0xb8, 0xf8, 0xff, 0x58, 0xb0, 0xf8, 0xff, 0x50, 0xac, 0xf8, 0xff, 0x68, 0xb8, 
    0xf8, 0xff, 0x98, 0xb8, 0xd0, 0xff, 0xb0, 0x90, 0x70, 0xff, 0xe8, 0xe4, 0xe0, 
    0x80, 0x82, 0xf8, 0xfc, 0xf8, 0x00, 0x83, 0xf8, 0xfc, 0xf8, 0x00, 0x07, 0xf8, 
    0xf4, 0xf0, 0x33, 0xd0, 0xc0, 0xa8, 0xcc, 0xb8, 0x9c, 0x80, 0xff, 0xa8, 0x90, 
    0x68, 0xff, 0xb0, 0x94, 0x70, 0xff, 0xb8, 0xa0, 0x80, 0xff, 0xd0, 0xc4, 0xb0, 
    0xcc, 0xf8, 0xf8, 0xf8, 0x00, 0x83, 0xf8, 0xfc, 0xf8, 0x00
};
GX_CONST GX_PIXELMAP DISPLAY_1_THEME_1_RADIO_ON_pixelmap =
{
    0x00000001,                              /* major version                  */
    0x00000000,                              /* minor version                  */
    GX_PIXELMAP_COMPRESSED|GX_PIXELMAP_ALPHA,         /* flags                 */
    GX_COLOR_FORMAT_32ARGB,                  /* Format                         */
    (GX_UBYTE *) DISPLAY_1_THEME_1_RADIO_ON_pixelmap_data,
    sizeof(DISPLAY_1_THEME_1_RADIO_ON_pixelmap_data),    /* the size of pixelmap_data*/
    NULL,
    0,                                       /* auxiliary data size            */
    0x00,                                    /* used for transparent iamges    */
    16,                                      /* width in pixel                 */
    16                                       /* height in pixel                */
};

/* THEME_1_RADIO_OFF pixelmap data                                             */

#ifdef WIN32
static GX_CONST GX_UBYTE DISPLAY_1_THEME_1_RADIO_OFF_pixelmap_data[660] =
#else
static GX_CONST GX_UBYTE DISPLAY_1_THEME_1_RADIO_OFF_pixelmap_data[660] __attribute__((aligned(4))) =
#endif
{
    0x83, 0xf8, 0xfc, 0xf8, 0x00, 0x07, 0xf8, 0xf4, 0xf0, 0xff, 0xd0, 0xc0, 0xa8, 
    0xb3, 0xb0, 0x98, 0x78, 0xff, 0xa8, 0x90, 0x68, 0xff, 0xb0, 0x94, 0x70, 0xff, 
    0xb8, 0xa0, 0x80, 0xff, 0xd0, 0xc4, 0xb0, 0xb3, 0xf8, 0xf8, 0xf8, 0x00, 0x83, 
    0xf8, 0xfc, 0xf8, 0x00, 0x82, 0xf8, 0xfc, 0xf8, 0x00, 0x09, 0xe0, 0xdc, 0xd0, 
    0x80, 0xb0, 0x90, 0x70, 0xff, 0x90, 0xbc, 0xd8, 0xff, 0x68, 0xb4, 0xf8, 0xff, 
    0x58, 0xb0, 0xf8, 0xff, 0x58, 0xb0, 0xf8, 0xff, 0x68, 0xb8, 0xf8, 0xff, 0x98, 
    0xb8, 0xd0, 0xff, 0xb0, 0x90, 0x70, 0xff, 0xe8, 0xe4, 0xe0, 0x33, 0x82, 0xf8, 
    0xfc, 0xf8, 0x00, 0x0f, 0xf8, 0xfc, 0xf8, 0x00, 0xf8, 0xfc, 0xf8, 0x00, 0xd0, 
    0xc4, 0xb0, 0xb3, 0xa8, 0xb0, 0xb0, 0xff, 0x60, 0xb4, 0xf8, 0xff, 0x90, 0xcc, 
    0xf8, 0xff, 0xd8, 0xec, 0xf8, 0xff, 0xf8, 0xfc, 0xf8, 0xff, 0xf8, 0xfc, 0xf8, 
    0xff, 0xd0, 0xe8, 0xf8, 0xff, 0x88, 0xc8, 0xf8, 0xff, 0x68, 0xb8, 0xf8, 0xff, 
    0xa8, 0xa4, 0x98, 0xff, 0xd8, 0xd0, 0xc0, 0xb3, 0xf8, 0xfc, 0xf8, 0x00, 0xf8, 
    0xfc, 0xf8, 0x00, 0x04, 0xf8, 0xfc, 0xf8, 0x00, 0xe0, 0xdc, 0xd0, 0x80, 0xa8, 
    0xb4, 0xb8, 0xff, 0x58, 0xb0, 0xf8, 0xff, 0xe8, 0xf4, 0xf8, 0xff, 0x85, 0xf8, 
    0xfc, 0xf8, 0xff, 0x04, 0xe0, 0xf0, 0xf8, 0xff, 0x58, 0xb0, 0xf8, 0xff, 0xb0, 
    0xa8, 0x98, 0xff, 0xf0, 0xe8, 0xe0, 0x33, 0xf8, 0xfc, 0xf8, 0x00, 0x03, 0xf8, 
    0xf4, 0xf0, 0x33, 0xb0, 0x98, 0x78, 0xff, 0x68, 0xb8, 0xf8, 0xff, 0xf0, 0xf8, 
    0xf8, 0xff, 0x87, 0xf8, 0xfc, 0xf8, 0xff, 0x03, 0xe0, 0xf0, 0xf8, 0xff, 0x68, 
    0xb8, 0xf8, 0xff, 0xb0, 0x94, 0x70, 0xff, 0xf8, 0xfc, 0xf8, 0x00, 0x02, 0xd0, 
    0xc0, 0xa8, 0xb3, 0x98, 0xc0, 0xe0, 0xff, 0xa8, 0xd4, 0xf8, 0xff, 0x89, 0xf8, 
    0xfc, 0xf8, 0xff, 0x02, 0x80, 0xc4, 0xf8, 0xff, 0xa8, 0xbc, 0xc8, 0xff, 0xe0, 
    0xd4, 0xc8, 0x80, 0x02, 0xb8, 0xa4, 0x88, 0xff, 0x68, 0xb8, 0xf8, 0xff, 0xf0, 
    0xf8, 0xf8, 0xff, 0x89, 0xf8, 0xfc, 0xf8, 0xff, 0x02, 0xc8, 0xe4, 0xf8, 0xff, 
    0x80, 0xc0, 0xf8, 0xff, 0xc8, 0xb0, 0x98, 0xff, 0x01, 0xb8, 0xa4, 0x88, 0xff, 
    0x68, 0xb8, 0xf8, 0xff, 0x8b, 0xf8, 0xfc, 0xf8, 0xff, 0x01, 0x68, 0xb8, 0xf8, 
    0xff, 0xb8, 0xa4, 0x88, 0xff, 0x01, 0xb8, 0xa0, 0x80, 0xff, 0x68, 0xb8, 0xf8, 
    0xff, 0x8b, 0xf8, 0xfc, 0xf8, 0xff, 0x01, 0x60, 0xb4, 0xf8, 0xff, 0xb8, 0xa0, 
    0x80, 0xff, 0x02, 0xb8, 0xa0, 0x80, 0xff, 0x68, 0xb8, 0xf8, 0xff, 0xf0, 0xf8, 
    0xf8, 0xff, 0x89, 0xf8, 0xfc, 0xf8, 0xff, 0x02, 0xc8, 0xe4, 0xf8, 0xff, 0x80, 
    0xc0, 0xf8, 0xff, 0xc8, 0xb0, 0x98, 0xff, 0x02, 0xd0, 0xc0, 0xa8, 0xb3, 0x98, 
    0xc0, 0xe0, 0xff, 0xa8, 0xd4, 0xf8, 0xff, 0x89, 0xf8, 0xfc, 0xf8, 0xff, 0x02, 
    0x80, 0xc4, 0xf8, 0xff, 0xa8, 0xbc, 0xc8, 0xff, 0xe0, 0xd4, 0xc8, 0x80, 0x03, 
    0xf8, 0xf4, 0xf0, 0x00, 0xb0, 0x98, 0x78, 0xff, 0x68, 0xb8, 0xf8, 0xff, 0xf0, 
    0xf8, 0xf8, 0xff, 0x87, 0xf8, 0xfc, 0xf8, 0xff, 0x03, 0xe0, 0xf0, 0xf8, 0xff, 
    0x68, 0xb8, 0xf8, 0xff, 0xb0, 0x94, 0x70, 0xff, 0xf8, 0xfc, 0xf8, 0x00, 0x04, 
    0xf8, 0xfc, 0xf8, 0x00, 0xe0, 0xdc, 0xd0, 0x80, 0xa8, 0xb4, 0xb8, 0xff, 0x58, 
    0xb0, 0xf8, 0xff, 0xe8, 0xf4, 0xf8, 0xff, 0x85, 0xf8, 0xfc, 0xf8, 0xff, 0x04, 
    0xe0, 0xf0, 0xf8, 0xff, 0x58, 0xb0, 0xf8, 0xff, 0xb0, 0xa8, 0x98, 0xff, 0xf0, 
    0xe8, 0xe0, 0x33, 0xf8, 0xfc, 0xf8, 0x00, 0x0f, 0xf8, 0xfc, 0xf8, 0x00, 0xf8, 
    0xfc, 0xf8, 0x00, 0xd0, 0xc4, 0xb0, 0xb3, 0xa8, 0xb0, 0xb0, 0xff, 0x60, 0xb4, 
    0xf8, 0xff, 0x90, 0xcc, 0xf8, 0xff, 0xd0, 0xe8, 0xf8, 0xff, 0xf8, 0xfc, 0xf8, 
    0xff, 0xf8, 0xfc, 0xf8, 0xff, 0xc8, 0xe4, 0xf8, 0xff, 0x80, 0xc4, 0xf8, 0xff, 
    0x60, 0xb4, 0xf8, 0xff, 0xa8, 0xa4, 0x98, 0xff, 0xd8, 0xd0, 0xc0, 0xb3, 0xf8, 
    0xfc, 0xf8, 0x00, 0xf8, 0xfc, 0xf8, 0x00, 0x82, 0xf8, 0xfc, 0xf8, 0x00, 0x09, 
    0xe0, 0xdc, 0xd0, 0x80, 0xb0, 0x90, 0x70, 0xff, 0x90, 0xbc, 0xd8, 0xff, 0x68, 
    0xb8, 0xf8, 0xff, 0x58, 0xb0, 0xf8, 0xff, 0x50, 0xac, 0xf8, 0xff, 0x68, 0xb8, 
    0xf8, 0xff, 0x98, 0xb8, 0xd0, 0xff, 0xb0, 0x90, 0x70, 0xff, 0xe8, 0xe4, 0xe0, 
    0x80, 0x82, 0xf8, 0xfc, 0xf8, 0x00, 0x83, 0xf8, 0xfc, 0xf8, 0x00, 0x07, 0xf8, 
    0xf4, 0xf0, 0x33, 0xd0, 0xc0, 0xa8, 0xb3, 0xb8, 0x9c, 0x80, 0xff, 0xa8, 0x90, 
    0x68, 0xff, 0xb0, 0x94, 0x70, 0xff, 0xb8, 0xa0, 0x80, 0xff, 0xd0, 0xc4, 0xb0, 
    0xb3, 0xf8, 0xf8, 0xf8, 0x00, 0x83, 0xf8, 0xfc, 0xf8, 0x00
};
GX_CONST GX_PIXELMAP DISPLAY_1_THEME_1_RADIO_OFF_pixelmap =
{
    0x00000001,                              /* major version                  */
    0x00000000,                              /* minor version                  */
    GX_PIXELMAP_COMPRESSED|GX_PIXELMAP_ALPHA,         /* flags                 */
    GX_COLOR_FORMAT_32ARGB,                  /* Format                         */
    (GX_UBYTE *) DISPLAY_1_THEME_1_RADIO_OFF_pixelmap_data,
    sizeof(DISPLAY_1_THEME_1_RADIO_OFF_pixelmap_data),    /* the size of pixelmap_data*/
    NULL,
    0,                                       /* auxiliary data size            */
    0x00,                                    /* used for transparent iamges    */
    16,                                      /* width in pixel                 */
    16                                       /* height in pixel                */
};

/* THEME_1_CHECKBOX_ON pixelmap data                                           */

#ifdef WIN32
static GX_CONST GX_UBYTE DISPLAY_1_THEME_1_CHECKBOX_ON_pixelmap_data[466] =
#else
static GX_CONST GX_UBYTE DISPLAY_1_THEME_1_CHECKBOX_ON_pixelmap_data[466] __attribute__((aligned(4))) =
#endif
{
    0x8f, 0x90, 0x1a, 0x0f, 0x90, 0x1a, 0x17, 0xbe, 0xd8, 0xe6, 0x97, 0xde, 0x75, 
    0xde, 0x74, 0xde, 0x53, 0xde, 0x31, 0xde, 0x10, 0xd6, 0x11, 0xde, 0x32, 0xde, 
    0x32, 0xde, 0x11, 0xd6, 0x0f, 0xde, 0x2d, 0xb5, 0x90, 0x1a, 0x0f, 0x90, 0x1a, 
    0xd8, 0xe6, 0xf9, 0xff, 0x97, 0xff, 0x55, 0xff, 0x33, 0xff, 0x11, 0xff, 0xf0, 
    0xfe, 0xf0, 0xfe, 0x11, 0xff, 0x33, 0xff, 0x76, 0xff, 0x54, 0xff, 0x10, 0xff, 
    0xee, 0xdd, 0x90, 0x1a, 0x0f, 0x90, 0x1a, 0x97, 0xde, 0x97, 0xff, 0x57, 0xff, 
    0x58, 0xff, 0x57, 0xff, 0x36, 0xff, 0x16, 0xff, 0x36, 0xff, 0x58, 0xff, 0x9a, 
    0xff, 0x91, 0xb6, 0xd3, 0xde, 0x13, 0xff, 0xcf, 0xd5, 0x90, 0x1a, 0x0f, 0x90, 
    0x1a, 0x96, 0xde, 0x97, 0xff, 0x9a, 0xff, 0xdf, 0xff, 0xdf, 0xf7, 0xbf, 0xf7, 
    0xdf, 0xf7, 0xdf, 0xff, 0xff, 0xff, 0x7b, 0xdf, 0x25, 0x25, 0x2d, 0x9e, 0x55, 
    0xff, 0xcf, 0xd5, 0x90, 0x1a, 0x0f, 0x90, 0x1a, 0x96, 0xde, 0x98, 0xff, 0x9b, 
    0xff, 0xdf, 0xff, 0xde, 0xff, 0xbe, 0xf7, 0xbe, 0xf7, 0xff, 0xff, 0x7b, 0xdf, 
    0x04, 0x25, 0xe2, 0x0c, 0x4f, 0xae, 0x34, 0xff, 0xcf, 0xd5, 0x90, 0x1a, 0x0f, 
    0x90, 0x1a, 0x75, 0xde, 0xb9, 0xff, 0x91, 0xae, 0xaa, 0x55, 0xff, 0xff, 0xdf, 
    0xff, 0xff, 0xff, 0x18, 0xc7, 0x26, 0x35, 0x03, 0x1d, 0xa1, 0x04, 0x4e, 0xa6, 
    0x34, 0xff, 0xce, 0xd5, 0x90, 0x1a, 0x0f, 0x90, 0x1a, 0x74, 0xde, 0xb9, 0xff, 
    0x70, 0xa6, 0xe2, 0x14, 0x0e, 0x76, 0xdf, 0xff, 0x17, 0xbf, 0x88, 0x45, 0xc1, 
    0x0c, 0xc2, 0x14, 0x72, 0x8e, 0xf5, 0xe6, 0xf1, 0xfe, 0xad, 0xd5, 0x90, 0x1a, 
    0x0f, 0x90, 0x1a, 0x53, 0xde, 0xb8, 0xff, 0x70, 0xa6, 0xa1, 0x04, 0xc2, 0x14, 
    0xb3, 0x9e, 0xaa, 0x55, 0xa0, 0x04, 0x04, 0x25, 0x0e, 0x76, 0xdf, 0xf7, 0x57, 
    0xff, 0x6c, 0xfe, 0x6b, 0xd5, 0x90, 0x1a, 0x0f, 0x90, 0x1a, 0x33, 0xde, 0x97, 
    0xff, 0xb2, 0xbe, 0x46, 0x35, 0x03, 0x1d, 0xe2, 0x14, 0xe2, 0x14, 0x04, 0x25, 
    0xec, 0x65, 0xff, 0xff, 0xff, 0xff, 0xd3, 0xfe, 0x08, 0xfe, 0x49, 0xd5, 0x90, 
    0x1a, 0x0f, 0x90, 0x1a, 0x32, 0xde, 0x33, 0xff, 0x9a, 0xff, 0x7b, 0xdf, 0x04, 
    0x25, 0x03, 0x1d, 0xc2, 0x14, 0x0e, 0x76, 0xff, 0xff, 0xde, 0xff, 0xdf, 0xf7, 
    0x91, 0xfe, 0xc6, 0xfd, 0x28, 0xd5, 0x90, 0x1a, 0x0f, 0x90, 0x1a, 0xef, 0xd5, 
    0xd0, 0xfe, 0x37, 0xff, 0xff, 0xff, 0x7b, 0xdf, 0x25, 0x25, 0x51, 0x86, 0xdf, 
    0xf7, 0xff, 0xff, 0xdf, 0xf7, 0xff, 0xf7, 0x90, 0xfe, 0xc5, 0xfd, 0x28, 0xd5, 
    0x90, 0x1a, 0x0f, 0x90, 0x1a, 0xce, 0xd5, 0x8d, 0xfe, 0xb1, 0xfe, 0x36, 0xff, 
    0x79, 0xff, 0x70, 0xb6, 0xf5, 0xe6, 0x57, 0xff, 0xd3, 0xfe, 0x91, 0xfe, 0x90, 
    0xfe, 0xea, 0xfd, 0xc5, 0xfd, 0x28, 0xd5, 0x90, 0x1a, 0x0f, 0x90, 0x1a, 0xcd, 
    0xdd, 0xac, 0xfe, 0x6b, 0xfe, 0x8d, 0xfe, 0xd0, 0xfe, 0x33, 0xff, 0xf1, 0xfe, 
    0x6c, 0xfe, 0x08, 0xfe, 0xc6, 0xfd, 0xc5, 0xfd, 0xc5, 0xfd, 0xe5, 0xfd, 0x27, 
    0xdd, 0x90, 0x1a, 0x09, 0x90, 0x1a, 0x0d, 0xb5, 0xac, 0xdd, 0x8b, 0xd5, 0x8c, 
    0xd5, 0xae, 0xd5, 0xce, 0xd5, 0xad, 0xd5, 0x6b, 0xd5, 0x49, 0xd5, 0x82, 0x28, 
    0xd5, 0x02, 0x27, 0xdd, 0xa9, 0xb4, 0x90, 0x1a, 0x8f, 0x90, 0x1a
};
GX_CONST GX_PIXELMAP DISPLAY_1_THEME_1_CHECKBOX_ON_pixelmap =
{
    0x00000001,                              /* major version                  */
    0x00000000,                              /* minor version                  */
    GX_PIXELMAP_COMPRESSED,                  /* flags                          */
    GX_COLOR_FORMAT_565RGB,                  /* Format                         */
    (GX_UBYTE *) DISPLAY_1_THEME_1_CHECKBOX_ON_pixelmap_data,
    sizeof(DISPLAY_1_THEME_1_CHECKBOX_ON_pixelmap_data),    /* the size of pixelmap_data*/
    NULL,
    0,                                       /* auxiliary data size            */
    0x00,                                    /* used for transparent iamges    */
    16,                                      /* width in pixel                 */
    16                                       /* height in pixel                */
};

/* THEME_1_CHECKBOX_OFF pixelmap data                                          */

#ifdef WIN32
static GX_CONST GX_UBYTE DISPLAY_1_THEME_1_CHECKBOX_OFF_pixelmap_data[396] =
#else
static GX_CONST GX_UBYTE DISPLAY_1_THEME_1_CHECKBOX_OFF_pixelmap_data[396] __attribute__((aligned(4))) =
#endif
{
    0x8f, 0x90, 0x1a, 0x0f, 0x90, 0x1a, 0x17, 0xbe, 0xd8, 0xe6, 0x97, 0xde, 0x75, 
    0xde, 0x74, 0xde, 0x53, 0xde, 0x32, 0xde, 0x10, 0xde, 0x10, 0xd6, 0xef, 0xd5, 
    0xef, 0xd5, 0xce, 0xd5, 0xcd, 0xdd, 0x0d, 0xb5, 0x90, 0x1a, 0x0f, 0x90, 0x1a, 
    0xd8, 0xe6, 0xf9, 0xff, 0x97, 0xff, 0x75, 0xff, 0x53, 0xff, 0x12, 0xff, 0xf0, 
    0xfe, 0xcf, 0xfe, 0xce, 0xfe, 0xad, 0xfe, 0x8c, 0xfe, 0x8c, 0xfe, 0xac, 0xfe, 
    0xac, 0xdd, 0x90, 0x1a, 0x0f, 0x90, 0x1a, 0x97, 0xde, 0x97, 0xff, 0x37, 0xff, 
    0x37, 0xf7, 0x16, 0xf7, 0xf5, 0xf6, 0xf5, 0xf6, 0xf4, 0xf6, 0xd4, 0xf6, 0xd3, 
    0xf6, 0xd3, 0xf6, 0x6e, 0xfe, 0x4a, 0xfe, 0x8b, 0xd5, 0x90, 0x1a, 0x03, 0x90, 
    0x1a, 0x75, 0xde, 0x75, 0xff, 0x37, 0xf7, 0x86, 0x5d, 0xe7, 0x04, 0x5e, 0xe7, 
    0x92, 0xf6, 0x29, 0xfe, 0x6b, 0xd5, 0x90, 0x1a, 0x04, 0x90, 0x1a, 0x74, 0xde, 
    0x53, 0xff, 0x16, 0xf7, 0x5d, 0xe7, 0x85, 0x3c, 0xe7, 0x04, 0x5d, 0xe7, 0x91, 
    0xf6, 0x28, 0xfe, 0x6a, 0xd5, 0x90, 0x1a, 0x04, 0x90, 0x1a, 0x53, 0xde, 0x12, 
    0xff, 0xf5, 0xf6, 0x5d, 0xe7, 0x85, 0x3c, 0xe7, 0x04, 0x5d, 0xe7, 0x70, 0xf6, 
    0x07, 0xfe, 0x4a, 0xd5, 0x90, 0x1a, 0x04, 0x90, 0x1a, 0x32, 0xde, 0xf0, 0xfe, 
    0xf5, 0xf6, 0x5d, 0xe7, 0x85, 0x3c, 0xe7, 0x04, 0x5d, 0xe7, 0x70, 0xf6, 0x07, 
    0xfe, 0x49, 0xd5, 0x90, 0x1a, 0x04, 0x90, 0x1a, 0x10, 0xde, 0xcf, 0xfe, 0xf4, 
    0xf6, 0x5d, 0xe7, 0x85, 0x3c, 0xe7, 0x04, 0x5d, 0xe7, 0x70, 0xf6, 0xe6, 0xfd, 
    0x49, 0xd5, 0x90, 0x1a, 0x04, 0x90, 0x1a, 0x10, 0xd6, 0xce, 0xfe, 0xd4, 0xf6, 
    0x5d, 0xe7, 0x85, 0x3c, 0xe7, 0x04, 0x5d, 0xe7, 0x6f, 0xf6, 0xe6, 0xfd, 0x29, 
    0xd5, 0x90, 0x1a, 0x04, 0x90, 0x1a, 0xef, 0xd5, 0xad, 0xfe, 0xd3, 0xf6, 0x5d, 
    0xe7, 0x85, 0x3c, 0xe7, 0x04, 0x5d, 0xe7, 0x4f, 0xf6, 0xc5, 0xfd, 0x28, 0xd5, 
    0x90, 0x1a, 0x04, 0x90, 0x1a, 0xef, 0xd5, 0x8c, 0xfe, 0xd3, 0xf6, 0x5e, 0xe7, 
    0x85, 0x5d, 0xe7, 0x04, 0x7f, 0xe7, 0x4f, 0xf6, 0xc5, 0xfd, 0x28, 0xd5, 0x90, 
    0x1a, 0x05, 0x90, 0x1a, 0xce, 0xd5, 0x8c, 0xfe, 0x6e, 0xfe, 0x92, 0xf6, 0x91, 
    0xf6, 0x82, 0x70, 0xf6, 0x06, 0x6f, 0xf6, 0x4f, 0xf6, 0x4f, 0xf6, 0xea, 0xf5, 
    0xc5, 0xfd, 0x28, 0xd5, 0x90, 0x1a, 0x09, 0x90, 0x1a, 0xcd, 0xdd, 0xac, 0xfe, 
    0x4a, 0xfe, 0x29, 0xfe, 0x28, 0xfe, 0x07, 0xfe, 0x07, 0xfe, 0xe6, 0xfd, 0xe6, 
    0xfd, 0x82, 0xc5, 0xfd, 0x02, 0xe5, 0xfd, 0x27, 0xdd, 0x90, 0x1a, 0x09, 0x90, 
    0x1a, 0x0d, 0xb5, 0xac, 0xdd, 0x8b, 0xd5, 0x6b, 0xd5, 0x6a, 0xd5, 0x4a, 0xd5, 
    0x49, 0xd5, 0x49, 0xd5, 0x29, 0xd5, 0x82, 0x28, 0xd5, 0x02, 0x27, 0xdd, 0xa9, 
    0xb4, 0x90, 0x1a, 0x8f, 0x90, 0x1a
};
GX_CONST GX_PIXELMAP DISPLAY_1_THEME_1_CHECKBOX_OFF_pixelmap =
{
    0x00000001,                              /* major version                  */
    0x00000000,                              /* minor version                  */
    GX_PIXELMAP_COMPRESSED,                  /* flags                          */
    GX_COLOR_FORMAT_565RGB,                  /* Format                         */
    (GX_UBYTE *) DISPLAY_1_THEME_1_CHECKBOX_OFF_pixelmap_data,
    sizeof(DISPLAY_1_THEME_1_CHECKBOX_OFF_pixelmap_data),    /* the size of pixelmap_data*/
    NULL,
    0,                                       /* auxiliary data size            */
    0x00,                                    /* used for transparent iamges    */
    16,                                      /* width in pixel                 */
    16                                       /* height in pixel                */
};

/* Pixelmap Table                                                              */


GX_CONST GX_PIXELMAP *display_1_theme_1_pixelmap_table[] =
{
    GX_NULL,
    &DISPLAY_1_THEME_1_RADIO_ON_pixelmap,
    &DISPLAY_1_THEME_1_RADIO_OFF_pixelmap,
    &DISPLAY_1_THEME_1_CHECKBOX_ON_pixelmap,
    &DISPLAY_1_THEME_1_CHECKBOX_OFF_pixelmap
};

/* String values                                                               */


/* String Table for display_1 language English                                 */

GX_CONST GX_STRING display_1_English_string_table[1] =
{
    {GX_NULL, 0},
};

/*  Language Table                                                             */


GX_CONST GX_STRING *display_1_language_table[1] = 
{
    display_1_English_string_table,
};

GX_THEME display_1_theme_1 =
{
    (GX_COLOR *) display_1_theme_1_color_table,
    (GX_FONT **) display_1_theme_1_font_table,
    (GX_PIXELMAP **) display_1_theme_1_pixelmap_table,
    NULL,
    {
        20,                                  /* scroll width                   */
        18,                                  /* thumb width                    */
        20,                                  /* thumb travel min               */
        20,                                  /* thumb travel max               */
        4,                                   /* thumb border style             */
        0,                                   /* scroll fill pixelmap           */
        0,                                   /* scroll thumb pixelmap          */
        0,                                   /* scroll up pixelmap             */
        0,                                   /* scroll down pixelmap           */
        GX_COLOR_ID_SCROLL_BUTTON,           /* scroll thumb color             */
        GX_COLOR_ID_SCROLL_BUTTON,           /* scroll thumb border color      */
        GX_COLOR_ID_SCROLL_BUTTON,           /* scroll button color            */
    },
    {
        20,                                  /* scroll width                   */
        18,                                  /* thumb width                    */
        20,                                  /* thumb travel min               */
        20,                                  /* thumb travel max               */
        4,                                   /* thumb border style             */
        0,                                   /* scroll fill pixelmap           */
        0,                                   /* scroll thumb pixelmap          */
        0,                                   /* scroll up pixelmap             */
        0,                                   /* scroll down pixelmap           */
        GX_COLOR_ID_SCROLL_BUTTON,           /* scroll thumb color             */
        GX_COLOR_ID_CANVAS,                  /* scroll thumb border color      */
        GX_COLOR_ID_SCROLL_BUTTON,           /* scroll button color            */
    },
    GX_SCROLLBAR_RELATIVE_THUMB|GX_SCROLLBAR_END_BUTTONS|GX_SCROLLBAR_VERTICAL,
    GX_SCROLLBAR_RELATIVE_THUMB|GX_SCROLLBAR_END_BUTTONS|GX_SCROLLBAR_HORIZONTAL,
    29,                                      /* color table size               */
    4,                                       /* font table size                */
    5,                                       /* pixelmap table size            */
    0                                        /* palette size                   */

};
GX_CONST GX_THEME *display_1_theme_table[1] =
{
    &display_1_theme_1
};

