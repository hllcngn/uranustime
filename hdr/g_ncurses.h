#ifndef G_NCURSES_H
#define G_NCURSES_H
#include <ncurses.h>

#define WINW	75
#define WINH	15

#define _mainwin ((gx_env*)env)->mainwin

typedef struct{
	WINDOW	*mainwin;   }gx_env;

typedef struct{
	WINDOW	*win;	}gx_win;

#endif
