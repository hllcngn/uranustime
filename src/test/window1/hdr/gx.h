#pragma once

#include "windows_commons.h"

/*#ifdef CURSES_H
# include "gx_ncurses.h"
#else
# include "gx_xlib.h"
#endif*/

#define FPS	60

int	gx_start(gx_env** env);
void	gx_end(gx_env* env);

int	gx_getch(gx_env* env);
