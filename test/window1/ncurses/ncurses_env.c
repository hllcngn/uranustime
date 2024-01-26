#include "ncurses_struct.h"

int	gx_start(gx_env** env){
initscr();
if(COLS<WINW || LINES<WINH){
	printf("terminal needs to be at least %ix%i",WINW,WINH);
	endwin(); return -1;}
noecho(); cbreak(); curs_set(0);
refresh();
//
*env =(gx_env*)malloc(sizeof(gx_env));
gx_env* new =*env;
new->mainwin =newwin(WINH,WINW,0,0);
/*x*/box(new->mainwin,0,0);
/*x*/wrefresh(new->mainwin);
//
//new->wid =(gx_win**)malloc(sizeof(gx_win*)*WIN_COUNT);
return 0;}

void	gx_end(gx_env* env){
//free(env->wid);
delwin(env->mainwin);
free(env);
endwin();	return;}


int	gx_getch(gx_env* env){
return getch();}
