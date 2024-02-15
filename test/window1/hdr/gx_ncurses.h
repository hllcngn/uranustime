#ifndef GX_NCURSES_H
#define GX_NCURSES_H

#include <ncurses.h>

#include <stdlib.h>

#define WINW	75
#define WINH	15

typedef struct{
	char*		title;
	int		is_displayed;
	WINDOW*		id;
	void (*update)(void);		}gx_win;

/*typedef struct win_list{
	gx_win*		win;
	win_list*	next;		}win_list;*/

typedef struct{
	gx_win**	windows;	}gx_env;

#endif
