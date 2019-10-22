/* 
 * 240p Test Suite
 * Copyright (C)2014-2019 Artemio Urbina (PC Engine/TurboGrafx-16)
 *
 * This file is part of the 240p Test Suite
 *
 * The 240p Test Suite is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * The 240p Test Suite is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with 240p Test Suite; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 
 
 This version of the suite is compiled with HuC from https://github.com/uli/huc
 
 */
 
extern int type;	// float menu

#ifndef MENUDATA
#define MENUDATA
struct menu_data {
    int		id;
	char	*name;
};

typedef struct menu_data fmenudata;

#define NULL 0
#endif

#define RES_320 1
#define RES_256 2
#define RES_512 3
#define RES_352 4

extern char float_map[];
extern int float_bg[];
extern int float_pal[];

int DrawFloatMenuRes(int def);
int DrawFloatMenuResExtra(int def, char *option);
int DrawFloatMenu(int def, fmenudata *data, int size);