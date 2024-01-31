#include "gx_ncurses.h"

int	gx_start(gx_env** env){
initscr();
if(COLS<WINW || LINES<WINH){
	printf("terminal needs to be at least %ix%i",WINW,WINH);
	endwin(); return -1;}
noecho(); cbreak(); curs_set(0); refresh();
//
*env =malloc(sizeof(gx_env));
gx_env* new =*env;
new->mainwin =newwin(WINH,WINW,0,0);
/*x*/box(new->mainwin,0,0);
/*x*/wrefresh(new->mainwin);
//
//TODO create and generate windows list
//new->wid =malloc(sizeof(gx_win*)*WIN_COUNT);
return 0;}

void	gx_end(gx_env* env){
//free windows list
//free(env->wid);
delwin(env->mainwin);
free(env);
endwin();	return;}

//TODO refresh everything function


int	gx_getch(gx_env* env){
return getch();}

//TODO
//printing functions
//drawing functions
