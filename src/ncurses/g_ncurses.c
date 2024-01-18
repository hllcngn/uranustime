#include "g_ncurses.h"

int	gx_init(void** penv){
initscr();
if(COLS<WINW || LINES<WINH){
	printf("terminal needs to be at least %ix%i",WINW,WINH);
	endwin(); return -1;}
noecho(); cbreak(); curs_set(0); start_color();
refresh();
init_pair(10, 9, 15);
//
*penv =(void*)malloc(sizeof(gx_env));
gx_env* new =(gx_env*)*penv;
new->mainwin =newwin(15,75,0,0);
box(new->mainwin,0,0);
wrefresh(new->mainwin);
new->wid =(gx_win**)malloc(sizeof(gx_win*)*WIN_COUNT);
void* env =new;
_WSETTING =(gx_win*)gx_window(new, SETTINGX,SETTINGY,SETTINGW,SETTINGH,
		SETTINGTITLE, 0);
_WVIEW	=(gx_win*)gx_window(new, VIEWX,VIEWY,VIEWW,VIEWH, VIEWTITLE, 1);
_W1	=(gx_win*)gx_window(new, W1X,W1Y,W1W,W1H, W1TITLE, 1);
_WMD	=(gx_win*)gx_window(new, MDX,MDY,MDW,MDH, MDTITLE, 1);
return 0;}
//
void	gx_end(void *env){
for (int i=0;i<WIN_COUNT;i++){
       	gx_freewindow(_WID[i]);
}
free(_WID);
delwin(_mainwin);
free(env);
endwin();	return;}

void	*gx_window(void* env, int x,int y,int w,int h, char *title,
		int is_displayed){
gx_win*	new =(gx_win*)malloc(sizeof(gx_win));
new->id =newwin(h,w,y,x);
new->title =strdup(title);
new->is_displayed =is_displayed;
box(new->id, 0,0); mvwprintw(new->id, 0,2, title);
wrefresh(new->id);		return (void*)new;}
//
void	gx_freewindow(void* win){
free(_WIN->title);
delwin(_wid);
free(win);
return;}



char	gx_getch(void *env){
return getch();}



void	gx_hello(void *env){
printw("hello");	return;}
void	gx_print(void *env, int x100,int y100, char* str){
int x =x100*COLS/100, y =y100*LINES/100;
mvprintw(y,x, str);	return;}
void	gx_printw(void *env,void* win, int x,int y, char* str){
mvwprintw(_wid, y,x, str);
wrefresh(_wid);	return;}



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
