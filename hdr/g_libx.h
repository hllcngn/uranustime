#ifndef G_LIBX_H
#define G_LIBX_H
#include <X11/Xlib.h>
#include <X11/Xutil.h>

#define WINW	1000
#define WINH	700
//
#define VIEWTITLE "view"
#define VIEWX	0
#define VIEWY	0
#define VIEWW	700
#define VIEWH	600
//
#define W1TITLE	"my_win"
#define W1X	VIEWW
#define W1Y	0
#define W1W	300
#define W1H	600
//
#define MDTITLE	"moondata"
#define MDX	0
#define MDY	600
#define MDW	WINW
#define MDH	100
//
#define SETTINGTITLE	"settings"
#define SETTINGX  150
#define SETTINGY  150
#define SETTINGW  (WINW-2*SETTINGX)
#define SETTINGH  (WINH-2*SETTINGY)


#define _ENV	((gx_env*)env)
#define _WIN	((gx_win*)win)
//
#define _disp	_ENV->disp
#define _id	_ENV->id
#define _gc	_ENV->gc
#define _font	_ENV->font
//
#define _WID	_ENV->wid
#define _WVIEW	_WID[IDVIEW]
#define _W1	_WID[ID1]
#define _WMD	_WID[IDMD]
#define _WSETTING _WID[IDSETTING]
//
#define _wid	_WIN->id


typedef struct{
	char		*title;
	Window		id;	}gx_win;
typedef struct{
	Display		*disp;
	Window		id;
	gx_win		**wid;
	GC		gc;
	XFontStruct	*font;	}gx_env;

#endif
