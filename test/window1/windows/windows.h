#ifndef WINDOWS_H
#define WINDOWS_H

#ifdef CURSES_H
# include "gx_ncurses.h"
#else
# include "gx_xlib.h"
#endif

#define WIN_COUNT    3

#define MAIN	  0
#define WIN	  1
#define OTHERWIN  2

#include "mainwin.h"
#include "win.h"
#include "otherwin.h"

void create_windows(gx_env* env);
void destroy_windows(gx_env* env);

void update_windows(gx_env* env);

#endif
