#ifndef G_LIBX_H
#define G_LIBX_H
#include <X11/Xlib.h>
#include <X11/Xutil.h>

#include <stdlib.h>
#include <math.h>

#define _disp	((gx_env*)env)->disp
#define _winid	((gx_env*)env)->winid
#define _gc	((gx_env*)env)->gc
#define _font	((gx_env*)env)->font

typedef struct	gx_env{
	Display		*disp;
	int		winid;
	GC		gc;
	XFontStruct	*font;
}gx_env;

#endif
