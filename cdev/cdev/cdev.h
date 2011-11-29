/*
	Copyright (C) 2011 
	This file is part of CDev.

    CDev is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    CDev is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with CDev.  If not, see <http://www.gnu.org/licenses/>.

*/

#pragma once

#include "resource.h"
#include <Windows.h>
#include "OpenFiles.h"
#include "DoFileOpenSave.h"
/*--------------------------------------------------------------------*/

	HWND hwn;
	HWND mainTxt;
	int wmId, wmEvent;
	PAINTSTRUCT ps;
	HDC hdc;
	HINSTANCE hInstance;