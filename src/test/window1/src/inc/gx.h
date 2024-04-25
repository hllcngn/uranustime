#pragma once

#include "windows_commons.h"

/*#ifdef CURSES_H
# include "gx_ncurses.h"
#else
# include "gx_xlib.h"
#endif*/

#define FPS	6

int	gx_start(void** env);
void	gx_end(void* env);

int	gx_getch(void* env);
