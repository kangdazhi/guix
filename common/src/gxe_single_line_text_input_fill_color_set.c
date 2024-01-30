/***************************************************************************
 * Copyright (c) 2024 Microsoft Corporation 
 * 
 * This program and the accompanying materials are made available under the
 * terms of the MIT License which is available at
 * https://opensource.org/licenses/MIT.
 * 
 * SPDX-License-Identifier: MIT
 **************************************************************************/


/**************************************************************************/
/**************************************************************************/
/**                                                                       */
/** GUIX Component                                                        */
/**                                                                       */
/**   Single Line Text Input Managment (Single Line Text Input)           */
/**                                                                       */
/**************************************************************************/

#define GX_SOURCE_CODE


/* Include necessary system files.  */

#include "gx_api.h"
#include "gx_system.h"
#include "gx_single_line_text_input.h"

GX_CALLER_CHECKING_EXTERNS
/**************************************************************************/
/*                                                                        */
/*  FUNCTION                                               RELEASE        */
/*                                                                        */
/*    _gxe_single_line_text_input_fill_color_set          PORTABLE C      */
/*                                                           6.1          */
/*  AUTHOR                                                                */
/*                                                                        */
/*    Kenneth Maxwell, Microsoft Corporation                              */
/*                                                                        */
/*  DESCRIPTION                                                           */
/*                                                                        */
/*    This function checks for errors in the single line text input fill  */
/*    color set function call.                                            */
/*                                                                        */
/*                                                                        */
/*  INPUT                                                                 */
/*                                                                        */
/*    input                                 Pointer to single line text   */
/*                                            input control block         */
/*    normal_fill_color_id                  Resource ID of the normal     */
/*                                             fill color                 */
/*    selected_fill_color_id                Resource ID of the selected   */
/*                                             fill color                 */
/*    disabled_fill_color_id                Resource ID of the disabled   */
/*                                             fill color                 */
/*    readonly_fill_color_id                Resource ID of the read only  */
/*                                             fill color                 */
/*                                                                        */
/*  OUTPUT                                                                */
/*                                                                        */
/*    status                                Completion status             */
/*                                                                        */
/*  CALLS                                                                 */
/*                                                                        */
/*    _gx_single_line_text_input_fill_color_set                           */
/*                                          Actual single line text input */
/*                                            fill color set function     */
/*                                                                        */
/*  CALLED BY                                                             */
/*                                                                        */
/*    Application Code                                                    */
/*                                                                        */
/*  RELEASE HISTORY                                                       */
/*                                                                        */
/*    DATE              NAME                      DESCRIPTION             */
/*                                                                        */
/*  05-19-2020     Kenneth Maxwell          Initial Version 6.0           */
/*  09-30-2020     Kenneth Maxwell          Modified comment(s),          */
/*                                            resulting in version 6.1    */
/*                                                                        */
/**************************************************************************/
UINT  _gxe_single_line_text_input_fill_color_set(GX_SINGLE_LINE_TEXT_INPUT *input,
                                                 GX_RESOURCE_ID normal_fill_color_id,
                                                 GX_RESOURCE_ID selected_fill_color_id,
                                                 GX_RESOURCE_ID disabled_fill_color_id,
                                                 GX_RESOURCE_ID readonly_fill_color_id)
{
UINT status;

    /* Check for invalid caller.  */
    GX_INIT_AND_THREADS_CALLER_CHECKING

    /* Check for invalid pointer. */
    if (!input)
    {
        return(GX_PTR_ERROR);
    }

    /* Check for invalid widget type. */
    if (input -> gx_widget_type == 0)
    {
        return(GX_INVALID_WIDGET);
    }

    /* Call actual text input fill color set. */
    status = _gx_single_line_text_input_fill_color_set(input,
                                                       normal_fill_color_id,
                                                       selected_fill_color_id,
                                                       disabled_fill_color_id,
                                                       readonly_fill_color_id);

    return(status);
}

