#include "uranustime.h"
#include "g_hdr.h"
#include <time.h>//time
#include <stdlib.h>//srand

int	main(int ac, char **av){
srand(time(NULL));
MoonData** moondata =get_moondata();
void	*gx_env = gx_init();

gx_hello(gx_env);
gx_print(gx_env, 33,50, "hello2");
gx_point(gx_env);
gx_circle(gx_env);
gx_ellipse(gx_env);
gx_square_ellipse(gx_env);
void	*win1 = gx_window(gx_env, 780,40,400,90, "my_win");
gx_printw(gx_env,win1, 30,30, "hellowin");
void	*MDwin = gx_window(gx_env, 700,80,130,60+MOON_NB*20, "moondata");
for (int i=0,l=30;i<MOON_NB;i++,l+=20){
	gx_printw(gx_env,MDwin, 20,l, moondata[i]->name);}

gx_getch(gx_env);
gx_freewindow(win1);
gx_end(gx_env);
free_moondata(moondata);
return 0;}
