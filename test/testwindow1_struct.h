#ifndef STRUCT_H
#define STRUCT_H
#include <ncurses.h>

typedef struct gx_win{
	char	*title;
	int	is_displayed;
	WINDOW	*id;
	void (*update)(void);	}gx_win;

#endif
