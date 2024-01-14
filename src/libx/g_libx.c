#include "g_libx.h"

void	*gx_init(){
gx_env	*env = (gx_env*)malloc(sizeof(gx_env));
_disp = XOpenDisplay(NULL);
_gc = XCreateGC(_disp, RootWindow(_disp, 0), 0, NULL);
XSetForeground(_disp, _gc, 0x77733333);
_winid = XCreateSimpleWindow(_disp, RootWindow(_disp, 0),
		0, 0, 1000, 1000, 30, 0xff333333, 0xff333333);
XSelectInput(_disp, _winid, KeyPressMask | ExposureMask);
XMapWindow(_disp, _winid);
_font = XLoadQueryFont(_disp, "9x15");
XSetFont(_disp, _gc, _font->fid);
return (void*)env;}

void	gx_end(void *env){
XCloseDisplay(_disp);
free(env);	return;}

void	*gx_window(int x,int y,int h,int w, char *title){
return NULL;}

char	gx_getch(void *env){
XEvent		xe;
while(1){
	XNextEvent(_disp, &xe);
	if (xe.type == KeyPress) return 0;}
return 0;}




void	gx_circle(void *env){
XDrawArc(_disp,_winid,_gc, 100,33,200,200,360*64,360*64);
return;}

void	gx_point(void *env){
XDrawPoint(_disp,_winid,_gc, 400,400);
return;}

void	gx_ellipse(void *env){
int	half_minor_axis =100, half_major_axis =200;
int	n = 2000;
XPoint	*pts = (XPoint*)malloc(sizeof(XPoint)*n);
float	t = 0;
for (int i=0;i<n;i++){
	pts[i].x = half_major_axis*cos(t) +400;
	pts[i].y = half_minor_axis*sin(t) +400;
	t+=2*M_PI/n;}
XDrawPoints(_disp, _winid, _gc, pts, n, CoordModeOrigin);
free(pts);	return;}

void	gx_square_ellipse(void *env){
int	half_minor_axis =100, half_major_axis =200;
int	n = 17;//12;//900;
XPoint	*pts = (XPoint*)malloc(sizeof(XPoint)*(n+1));
float	t = 0;
for (int i=0;i<n;i++){
	pts[i].x = half_major_axis*cos(t) +400 +rand()%50;
	pts[i].y = half_minor_axis*sin(t) +650 +rand()%50;
	t+=2*M_PI/n;}
pts[n].x = pts[0].x;
pts[n].y = pts[0].y;
XDrawLines(_disp, _winid, _gc, pts, n+1, CoordModeOrigin);
free(pts);	return;}


void	gx_hello(void *env){
XDrawString(_disp, _winid, _gc, 33, 33, "hello", 5);
return;}
