/* GIMP - The GNU Image Manipulation Program
 * Copyright (C) 1995 Spencer Kimball and Peter Mattis
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GIMP_DISPLAY_SHELL_RENDER_H__
#define __GIMP_DISPLAY_SHELL_RENDER_H__

void  gimp_display_shell_render (GimpDisplayShell *shell,
                                 cairo_t          *cr,
                                 gint              x,
                                 gint              y,
                                 gint              w,
                                 gint              h,
                                 gdouble           scale);

#endif  /*  __GIMP_DISPLAY_SHELL_RENDER_H__  */
