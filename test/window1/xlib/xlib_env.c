#include "gx_xlib.h"

int	gx_start(gx_env** env){
*env =malloc(sizeof(gx_env));
gx_env*	new =*env;
//
new->disp =XOpenDisplay(NULL);
new->gc =XCreateGC(new->disp, RootWindow(new->disp, 0), 0, NULL);
XSetForeground(new->disp, new->gc, 0x99999999);
new->id =XCreateSimpleWindow(new->disp,RootWindow(new->disp, 0),
		0,0,WINW,WINH, 0,0,0);
XMapWindow(new->disp, new->id);
XSelectInput(new->disp, new->id, KeyPressMask|ExposureMask);
new->font =XLoadQueryFont(new->disp, "9x15");
XSetFont(new->disp, new->gc, new->font->fid);
//
//env->wid =(gx_win**)malloc(sizeof(gx_win*)*WIN_COUNT);
return 0;}

void	gx_end(gx_env* env){
XCloseDisplay(env->disp);
//free(env->wid);
free(env);	return;}


int	gx_getch(gx_env *env){
XEvent	xe;
while(1){ XNextEvent(env->disp, &xe);
if(xe.type == KeyPress)
	return XLookupKeysym(&xe.xkey,0);}
return 0;}
