#ifndef STRUCT2_H
#define STRUCT2_H

typedef struct{
	char		*title;
	int		is_displayed;
	Window		id;
	void (*update)(void);	}gx_win;

#endif
