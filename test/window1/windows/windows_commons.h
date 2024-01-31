#pragma once

#ifdef CURSES_H
# include "gx_ncurses.h"
#else
# include "gx_xlib.h"
#endif

#include <stdio.h>
#include <stdlib.h>
