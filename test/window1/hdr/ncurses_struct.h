#ifndef STRUCT_H
#define STRUCT_H

#include <ncurses.h>

#include <stdlib.h>

#define WINW	75
#define WINH	15

typedef struct gx_win{
	char		*title;
	int		is_displayed;
	WINDOW		*id;
	void (*update)(void);		}gx_win;

typedef struct{
	gx_win		**wid;
	WINDOW		*mainwin;	}gx_env;

#endif
