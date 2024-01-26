#ifndef STRUCT2_H
#define STRUCT2_H

#include <X11/Xlib.h>
#include <X11/Xutil.h>

#include <stdlib.h>

#define WINW	1000
#define WINH	700

typedef struct{
	char		*title;
	int		is_displayed;
	Window		id;
	void (*update)(void);		}gx_win;

typedef struct{
	Display		*disp;
	Window		id;
	gx_win		**wid;
	GC		gc;
	XFontStruct	*font;		}gx_env;

#endif
