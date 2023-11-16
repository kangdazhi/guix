/*******************************************************************************/
/*  This file is auto-generated by Azure RTOS GUIX Studio. Do not edit this    */
/*  file by hand. Modifications to this file should only be made by running    */
/*  the Azure RTOS GUIX Studio application and re-generating the application   */
/*  resource file(s). For more information please refer to the Azure RTOS GUIX */
/*  Studio User Guide, or visit our web site at azure.com/rtos                 */
/*                                                                             */
/*  GUIX Studio Revision 6.1.12.0                                              */
/*  Date (dd.mm.yyyy): 25. 8.2022   Time (hh:mm): 18:34                        */
/*******************************************************************************/


#ifndef _EXTENDED_UNICODE_MAIN_DISPLAY_RESOURCES_H_
#define _EXTENDED_UNICODE_MAIN_DISPLAY_RESOURCES_H_

#include "gx_api.h"

#if !defined(GX_UTF8_SUPPORT)
#error "The symbol GX_UTF8_SUPPORT must be defined to support the Studio project settings".
#endif
#if !defined(GX_EXTENDED_UNICODE_SUPPORT)
#error "The symbol GX_EXTENDED_UNICODE_SUPPORT must be defined to support the Studio project settings".
#endif

/* Display and theme definitions                                               */

#define MAIN_DISPLAY 0
#define MAIN_DISPLAY_COLOR_FORMAT GX_COLOR_FORMAT_24XRGB
#define MAIN_DISPLAY_X_RESOLUTION 640
#define MAIN_DISPLAY_Y_RESOLUTION 480
#define MAIN_DISPLAY_DEFAULT_THEME 0
#define MAIN_DISPLAY_THEME_TABLE_SIZE 1

/* Language definitions                                                        */

#define LANGUAGE_ENGLISH 0
#define MAIN_DISPLAY_LANGUAGE_TABLE_SIZE 1

/* Color ID definitions                                                        */

#define GX_COLOR_ID_YELLOW 29
#define GX_COLOR_ID_GREEN 30
#define GX_COLOR_ID_RED 31
#define GX_COLOR_ID_LIGHT_GRAY 32
#define GX_COLOR_ID_CHART_LINE 33
#define GX_COLOR_ID_WHITE 34
#define GX_COLOR_ID_ODD_ROW 35
#define GX_COLOR_ID_BLUE 36
#define MAIN_DISPLAY_COLOR_TABLE_SIZE 37

/* Font ID definitions                                                         */

#define GX_FONT_ID_OLD_ITALIC_8BPP 4
#define GX_FONT_ID_OLD_ITALIC_1BPP 5
#define GX_FONT_ID_OLD_ITALIC_4BPP 6
#define MAIN_DISPLAY_FONT_TABLE_SIZE 7

/* Pixelmap ID definitions                                                     */

#define MAIN_DISPLAY_PIXELMAP_TABLE_SIZE 5

/* String Ids                                                                  */

#define GX_STRING_ID_EXTENDED_UNICODES 1
#define MAIN_DISPLAY_STRING_TABLE_SIZE 2

#endif                                       /* sentry                         */
