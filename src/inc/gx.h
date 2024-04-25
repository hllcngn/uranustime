#ifndef GX_H
#define GX_H
#include "urt.h"

#include <stdlib.h>
#include <stdio.h>//error messages
#include <math.h>
#include <string.h>

#define FPS   60

//ui
#define WIN_COUNT   4
#define IDVIEW	    0
#define ID1	    1
#define IDMD	    2
#define IDSETTING   3

/*
navigate
clock
*/


typedef struct{ int x,y; }vect;
typedef struct{ int x,y,w,h; }rect;


int	gx_init(void** gx_env);
void	gx_end(void* gx_env);

void	*gx_window(void* gx_env, int x,int y,int w,int h, char *title,
		int is_displayed);
void	gx_freewindow(void* env, void* win);

char	gx_getch(void *gx_env);

void	gx_hello(void *gx_env);
void	gx_print(void *env, int x,int y, char* str);
void	gx_wprint(void *env,void* win, int x,int y, char* str);

void	gx_point(void *gx_env);
void	gx_ellipse(void *gx_env);

void	gx_draw_moondata(void* gx_env, MoonData** md);
void	gx_display_settings(void* env);

#endif
