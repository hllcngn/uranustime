#ifndef G_LIBX_H
#define G_LIBX_H
#include <X11/Xlib.h>
#include <X11/Xutil.h>

#define _disp	((g_env*)env)->disp
#define _gc	((g_env*)env)->gc
#define _winid	((g_env*)env)->winid

typedef struct	g_env{
Display		*disp;
int		winid;
GC		gc;
XFontStruct	*font;
}g_env;

#endif
