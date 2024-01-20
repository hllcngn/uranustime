#ifndef NCURSE_H
#define NCURSE_H
#include <ncurses.h>
#include "gx.h"

#define WINW	75
#define WINH	15
//
#define VIEWTITLE	"view"
#define VIEWX		0
#define VIEWY		0
#define VIEWW		30
#define VIEWH		12
//
#define W1TITLE		"my_win"
#define W1X		VIEWW
#define W1Y		0
#define W1W		45
#define W1H		12
//
#define MDTITLE		"moondata"
#define MDX		0
#define MDY		11
#define MDW		WINW
#define MDH		(WINH-MDY)
//
#define SETTINGTITLE	"settings"
#define SETTINGX	15
#define SETTINGY  	5
#define SETTINGW 	(WINW-2*SETTINGX)
#define SETTINGH  	(WINH-2*SETTINGY)


#define _ENV	((gx_env*)env)
#define _WIN	((gx_win*)win)
//
#define _mainwin _ENV->mainwin
//
#define _wid	_WIN->id
//
#define _WID	_ENV->wid
#define _WVIEW	_WID[IDVIEW]
#define _W1	_WID[ID1]
#define _WMD	_WID[IDMD]
#define _WSETTING _WID[IDSETTING]


typedef struct{
	char	*title;
	int	is_displayed;
	WINDOW	*id;	}gx_win;

typedef struct{
	gx_win	**wid;
	WINDOW	*mainwin;   }gx_env;

#endif
