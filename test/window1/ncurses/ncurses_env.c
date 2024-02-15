#include "gx_ncurses.h"
#include "windows.h"

int	gx_start(gx_env** env){
initscr();
if(COLS<WINW || LINES<WINH){
	printf("terminal needs to be at least %ix%i",WINW,WINH);
	endwin(); return -1;}
noecho(); cbreak(); curs_set(0); refresh();
//
*env =malloc(sizeof(gx_env));
create_windows(*env);
return 0;}

void	gx_end(gx_env* env){
destroy_windows(env);
free(env);
endwin();	return;}

//TODO refresh everything function


int	gx_getch(gx_env* env){
return getch();}

//TODO
//printing functions
//drawing functions
