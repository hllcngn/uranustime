#include "uranustime.h"
#include "g_hdr.h"
#include <time.h>//time
#include <stdlib.h>//srand

int	main(int ac, char **av){
void	*gx_env; if (gx_init(&gx_env)==-1) return -1;
MoonData** moondata =get_moondata();
srand(time(NULL));

gx_draw_moondata(gx_env, moondata);

int c =0; do{
switch(c){
case K_SETTINGS:	gx_display_settings(gx_env);	break;
default:	break;}
}while((c =(gx_getch(gx_env)))!=K_QUIT);
//gx_freewindow(win1);
gx_end(gx_env);
free_moondata(moondata);
return 0;}
