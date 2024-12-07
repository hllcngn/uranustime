#include "xlib.h"

int	gx_init(void** penv){
(*penv) = (void*)malloc(sizeof(gx_env));
void*	env = *penv;
//
_disp = XOpenDisplay(NULL);
_gc = XCreateGC(_disp, RootWindow(_disp, 0), 0, NULL);
XSetForeground(_disp, _gc, 0x99999999);
_id = XCreateSimpleWindow(_disp,RootWindow(_disp, 0), 0,0,WINW,WINH, 0,0,0);
XMapWindow(_disp, _id);
XSelectInput(_disp, _id, KeyPressMask | ExposureMask);
_font = XLoadQueryFont(_disp, "9x15");
XSetFont(_disp, _gc, _font->fid);
//
_WID =(gx_win**)malloc(sizeof(gx_win*)*WIN_COUNT);
_WSETTING =(gx_win*)gx_window(env, SETTINGX,SETTINGY,SETTINGW,SETTINGH,
		SETTINGTITLE, 0);
_WVIEW	  =(gx_win*)gx_window(env, VIEWX,VIEWY,VIEWW,VIEWH, VIEWTITLE, 1);
_W1	  =(gx_win*)gx_window(env, W1X,W1Y,W1W,W1H, W1TITLE, 1);
_WMD	  =(gx_win*)gx_window(env, MDX,MDY,MDW,MDH, MDTITLE, 1);
return 0;}
//
void	gx_end(void *env){
XCloseDisplay(_disp);
for (int i=0;i<WIN_COUNT;i++) gx_freewindow(env,_WID[i]);
free(_WID);
free(env);	return;}

void*	gx_window(void* env, int x,int y,int w,int h, char *title,
		int is_displayed){
gx_win*	new =(gx_win*)malloc(sizeof(gx_win));
new->id =XCreateSimpleWindow(_disp,_id, x,y,w,h, 3,0x33777777,0xff112288);
new->title =strdup(title);
new->is_displayed =is_displayed;
XMapWindow(_disp,new->id);
return (void*)new;}
//
void	gx_freewindow(void* env, void* win){
XDestroyWindow(_disp,_wid);
free(_WIN->title);
free(win);	return;}



char	gx_getch(void *env){
XEvent	xe;
while(1){ XNextEvent(_disp, &xe);
if(xe.type == KeyPress)
	return XLookupKeysym(&xe.xkey,0);}
return 0;}



void	gx_hello(void *env){
XDrawString(_disp,_id,_gc, 33,33, "hello", 5);
return;}
void	gx_print(void *env, int x,int y, char* str){
XDrawString(_disp,_id,_gc, x,y, str,strlen(str));
return;}
void	gx_wprint(void *env,void* win, int x,int y, char* str){
XDrawString(_disp,_wid,_gc, x,y, str,strlen(str));
return;}



void	gx_point(void *env){
XDrawPoint(_disp,_id,_gc, 400,400);
return;}

void	gx_ellipse(void *env){
int	half_minor_axis =100, half_major_axis =200;
int	n = 2000;
XPoint	*pts = (XPoint*)malloc(sizeof(XPoint)*n);
float	t = 0;	for (int i=0;i<n;i++){
	pts[i].x = half_major_axis*cos(t) +400;
	pts[i].y = half_minor_axis*sin(t) +400;
	t+=2*M_PI/n;}
XDrawPoints(_disp, _id, _gc, pts, n, CoordModeOrigin);
free(pts);	return;}
