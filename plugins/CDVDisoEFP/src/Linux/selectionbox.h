/*  selectionbox.h
 *  Copyright (C) 2002-2005  PCSX2 Team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
 *
 *  PCSX2 members can be contacted through their website at www.pcsx2.net.
 */


#ifndef SELECTIONBOX_H
#define SELECTIONBOX_H


#include <gtk/gtkwidget.h>


struct SelectionBoxData
{
	GtkWidget *window; // GtkWindow

	int wherefrom; // Which box called you?
	// 1 = MainBox
	// 2 = DeviceBox
	// 3 = ConversionBox
};

extern struct SelectionBoxData selectionbox;


extern void SelectionBoxDestroy();
extern void SelectionBoxRefocus();
extern void SelectionBoxDisplay();


#endif /* SELECTIONBOX_H */
