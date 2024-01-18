#include "uranustime.h"
#include "g_hdr.h"
#include <time.h>//time
#include <stdlib.h>//srand

int	main(int ac, char **av){
void	*gx_env; if (gx_init(&gx_env)==-1) return -1;
srand(time(NULL));
MoonData** moondata =get_moondata();

gx_hello(gx_env);
gx_print(gx_env, 5,5, "hello2");
gx_point(gx_env);
gx_circle(gx_env);
gx_ellipse(gx_env);
gx_square_ellipse(gx_env);
void	*win1 = gx_window(gx_env, 80,10,20,20, "my_win");
gx_printw(gx_env,win1, 50,20, "hellowin");
void	*MDwin = gx_window(gx_env, 70,20,20,60, "moondata");
for (int i=0,l=10;i<MOON_NB;i++,l+=10){
	gx_printw(gx_env,MDwin, 10,l, moondata[i]->name);}

gx_getch(gx_env);
gx_freewindow(win1);
gx_end(gx_env);
free_moondata(moondata);
return 0;}
