#ifndef G_LIBX_H
#define G_LIBX_H
#include <X11/Xlib.h>
#include <X11/Xutil.h>

#include <stdlib.h>
#include <math.h>
#include <string.h>

#define WINW	1000
#define WINH	800

#define _disp	((gx_env*)env)->disp
#define _id	((gx_env*)env)->id
#define _gc	((gx_env*)env)->gc
#define _font	((gx_env*)env)->font

#define _wid	((gx_win*)win)->id

typedef struct{
	Display		*disp;
	Window		id;
	GC		gc;
	XFontStruct	*font;	}gx_env;

typedef struct{
	Window		id;	}gx_win;

#endif
