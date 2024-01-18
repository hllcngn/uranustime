#include "g_hdr.h"
#include "g_ncurses.h"

int	gx_init(void** env){
initscr();
if(COLS<WINW || LINES<WINH){
	printf("terminal needs to be at least %ix%i",WINW,WINH);
	endwin(); return -1;}
noecho(); cbreak(); curs_set(0); start_color();
refresh();
init_pair(10, 9, 15);
//
*env =(void*)malloc(sizeof(gx_env));
_mainwin =newwin(15,75,0,0);
box(_mainwin,0,0);
wrefresh(_mainwin);
_WID =(gx_win**)malloc(sizeof(gx_win*)*WIN_COUNT);
_WSETTING =gx_window(env,SETTINGX,SETTINGY,SETTINGW,SETTINGH,SETTINGTITLE,0);
_WVIEW	=gx_window(env, VIEWX,VIEWY,VIEWW,VIEWH, VIEWTITLE, 1);
_W1	=gx_window(env, W1X,W1Y,W1W,W1H, W1TITLE, 1);
_WMD	=gx_window(env, MDX,MDY,MDW,MDH, MDTITLE, 1);
return 0;}
//
void	gx_end(void *env){
for (int i=0;i<WIN_COUNT;i++) gx_freewindow(_WID[i]);
free(_WID);
delwin(_mainwin);
free(env);
endwin();	return;}

void	*gx_window(void* env, int x,int y,int w,int h, char *title,
		int is_displayed){
gx_win*	win =(gx_win*)malloc(sizeof(gx_win));
_wid =newwin(h,w,y,x);
win->title =strdup(title);
win->is_displayed =is_displayed;
box(_wid, 0, 0); mvwprintw(_wid, 0,2, title);
wrefresh(_wid);		return (void*)win;}
//
void	gx_freewindow(void* win){
printf("debug"); getch();
//free(_WIN->title); //<==
delwin(_wid);
free(win);	return;}



char	gx_getch(void *env){
return getch();}



void	gx_hello(void *env){
printw("hello");	return;}
void	gx_print(void *env, int x100,int y100, char* str){
int x =x100*COLS/100, y =y100*LINES/100;
mvprintw(y,x, str);	return;}
void	gx_printw(void *env,void* win, int x100,int y100, char* str){
int w,h;	getmaxyx(win, h,w);
int x =x100*w/100, y =y100*(h-3)/100 +3;
mvwprintw(win, y,x, str);
wrefresh(win);	return;}



void	gx_circle(void *env){
int	half_minor_axis =7, half_major_axis =14;
int	n = 100;
vect	*pts = (vect*)malloc(sizeof(vect)*n);
float	t = 0;	for (int i=0;i<n;i++){
	pts[i].y = half_minor_axis*sin(t) +10;
	pts[i].x = half_major_axis*cos(t) +20;
	t+=2*M_PI/n;}
for (int i=0;i<n;i++) mvaddch(pts[i].y, pts[i].x, '.');
refresh();
free(pts);	return;}

void	gx_point(void *env){
attron(COLOR_PAIR(10));
mvaddch(2, 2, '+');
attroff(COLOR_PAIR(10));
return;}

void	gx_ellipse(void *env){
int	half_minor_axis =7, half_major_axis =14;
int	n = 100;
vect	*pts = (vect*)malloc(sizeof(vect)*n);
float	t = 0;	for (int i=0;i<n;i++){
	pts[i].y = half_minor_axis*sin(t) +7;
	pts[i].x = half_major_axis*cos(t) +40;
	t+=2*M_PI/n;}
for (int i=0;i<n;i++) mvaddch(pts[i].y, pts[i].x, '.');
refresh();
free(pts);	return;}

void	gx_square_ellipse(void *env){
return;}

void	gx_rect(void* env, int x,int y,int w,int h){
return;}
