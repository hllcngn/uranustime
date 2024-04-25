#pragma once

#include <ncurses.h>
#include <stdlib.h>

#define WINW	75
#define WINH	15

typedef struct gx_env gx_env;

typedef struct{
	char*		title;
	int		is_displayed;
	WINDOW*		id;
	void (*update)(void);
	void (*destroy)(gx_env* env);	}gx_win;

/*typedef struct win_list{
	gx_win*		win;
	win_list*	next;		}win_list;*/

typedef struct gx_env{
	gx_win**	windows;	}gx_env;
