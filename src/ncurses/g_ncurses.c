#include "g_hdr.h"
#include "g_ncurses.h"

void	*gx_init(){
initscr(); noecho(); cbreak();
curs_set(0); start_color();
refresh();
init_pair(10, 9, 15);
return NULL;}
void	gx_end(void *env){
endwin();	return;}

void	*gx_window(void* env, int x100,int y100,int w100,int h100,
		char *title){
int x =x100*COLS/100, y =y100*LINES/100;
int w =w100*COLS/100, h =h100*LINES/100;
WINDOW	*win = newwin(h,w,y,x);
box(win, 0, 0); mvwprintw(win, 1,1, title);
wmove(win, 2,1); for (int i=1; i<w-1; i++) waddch(win, '-');
return (void*)win;}
void	gx_freewindow(void* win){
delwin(win);	return;}



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
