#include "gx_api.h"

/* RADIO_ON pixelmap data                                                      */

static GX_CONST UINT RADIO_ON_pixelmap_data[154] =
{
    0x00ffffff, 0x80f2f5f8, 0xccaec1d2, 0xff7c9bb6, 0xff6e90ae, 0xff7595b2, 0xff83a0ba, 
    0xa3b5c6d6, 0x00f9fafc, 0x00ffffff, 0x00ffffff, 0x80d2dce6, 0xff7193b0, 0xffddbc94, 
    0xfffcb668, 0xffffb15a, 0xffffb35f, 0xfffab86d, 0xffd1b99c, 0xff7193b0, 0x80e0e7ee, 
    0x00ffffff, 0x00ffffff, 0x00ffffff, 0xccb2c4d4, 0xffb3b0a8, 0xffffb564, 0xffa4db4c, 
    0xff77eb39, 0xff49e901, 0xff49e901, 0xff77ea36, 0xffa4d846, 0xfffeb869, 0xff9ea7ad, 
    0xccc3d1de, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x80d2dce6, 0xffb9b4ac, 0xffffb35f, 
    0xff77ed3d, 0xff49e901, 0xff77eb3a, 0xffffb15a, 0xff9eabb3, 0x80e3eaf0, 0x00ffffff, 
    0x33f2f5f8, 0xff7c9bb6, 0xffffb869, 0xff77ed3e, 0xff49e901, 0xff77eb3a, 0xfffeba6e, 
    0xff7595b2, 0x00fcfdfe, 0xccaec1d2, 0xffe6c39a, 0xffa4df55, 0xff49e901, 0xffffc484, 
    0xffc8bdaf, 0xa4cad7e2, 0xff8aa6be, 0xffffbb6f, 0xff77ed3e, 0xff49e901, 0xffa4e766, 
    0xfff8c183, 0xff9cb3c8, 0xff8aa6be, 0xffffbb6f, 0xff49e901, 0xffffb869, 0xff8aa6be, 
    0xff83a0ba, 0xffffb869, 0xff49e901, 0xffffb564, 0xff83a0ba, 0xff87a3bc, 0xffffbb6f, 
    0xff77ed3e, 0xff49e901, 0xff60e81b, 0xfff9c080, 0xff9cb3c8, 0xccaec1d2, 0xffe6c39a, 
    0xff77e42b, 0xff49e901, 0xffffc484, 0xffc8bdaf, 0x83cad7e2, 0x00f2f5f8, 0xff7c9bb6, 
    0xffffb869, 0xff60eb20, 0xff49e901, 0xff77eb3a, 0xfffeba6e, 0xff7595b2, 0x00fcfdfe, 
    0x00ffffff, 0xccd2dce6, 0xffb9b4ac, 0xffffb35f, 0xff60eb1f, 0xff49e901, 0xff77eb3a, 
    0xffffb15a, 0xff9eabb3, 0x80e3eaf0, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0xccb2c4d4, 
    0xffb3b0a8, 0xffffb462, 0xffa4da4a, 0xff77ea36, 0xff49e901, 0xff49e901, 0xff77e834, 
    0xffffc687, 0xfffeb766, 0xff9ea7ad, 0xccc3d1de, 0x00ffffff, 0x00ffffff, 0x00ffffff, 
    0xccd2dce6, 0xff7193b0, 0xffddbc94, 0xfffcb86b, 0xffffb15a, 0xffffaf56, 0xfffab86d, 
    0xffd1b99c, 0xff7193b0, 0x80e0e7ee, 0x00ffffff, 0x00ffffff, 0x33f2f5f8, 0xccaec1d2, 
    0xff809db8, 0xff6e90ae, 0xff7595b2, 0xff83a0ba, 0xccb5c6d6, 0x00f9fafc, 0x00ffffff

};

/* RADIO_ON auxiliary data                                                     */

static GX_CONST GX_UBYTE RADIO_ON_pixelmap_aux_data[44] =
{
    0x83, 0x07, 0x83, 0x82, 0x09, 0x82, 0x0f, 0x04, 0x85, 0x04, 0x03, 0x87, 0x03, 
    0x02, 0x89, 0x02, 0x02, 0x89, 0x02, 0x01, 0x8b, 0x01, 0x01, 0x8b, 0x01, 0x02, 
    0x89, 0x02, 0x02, 0x89, 0x02, 0x03, 0x87, 0x03, 0x04, 0x85, 0x04, 0x0f, 0x82, 
    0x09, 0x82, 0x83, 0x07, 0x83
};
GX_CONST GX_PIXELMAP RADIO_ON_pixelmap =
{
    0x00000001,                              /* major version                  */
    0x00000000,                              /* minor version                  */
    GX_PIXELMAP_COMPRESSED|GX_PIXELMAP_ALPHA,         /* flags                 */
    GX_COLOR_FORMAT_24XRGB,              /* Format                         */
    (GX_UBYTE *)RADIO_ON_pixelmap_data,
    sizeof(RADIO_ON_pixelmap_data),          /* the size of pixelmap_data      */
    (GX_UBYTE *)RADIO_ON_pixelmap_aux_data,
    sizeof(RADIO_ON_pixelmap_aux_data),      /* the size of pixelmap_data      */
    0x0000,                                  /* used for transparent GIF iamges*/
    16,                                      /* width in pixel                 */
    16                                       /* height in pixel                */
};
