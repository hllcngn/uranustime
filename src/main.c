#include "urt.h"
#include "gx.h"
#include <time.h>//time,clock
#include <unistd.h>//usleep

int	main(int ac, char **av){
void	*gx_env; if(gx_init(&gx_env)==-1) return -1;
MoonData** moondata =get_moondata();

gx_draw_moondata(gx_env, moondata);

int c =0, interval =CLOCKS_PER_SEC/FPS; do{
clock_t begin =clock();

switch(c){
case K_SETTINGS:  gx_display_settings(gx_env);  break;
default:	  break;}

/*
#ifdef IDVIEW
update view at 60fps (when moving? or is it not possible to stay still)
or when move
#endif
#ifdef IDCLOCK
update clock every ??? seconds
depending on the astral bodies depicted
this needs to be asynchronous from ui interactions,
     which need to be instantaneous
#endif
I think it's best to run it all at 60fps
getch needs to be non-blocking
there's a point in running it every 60fps if it's less consuming
*/

clock_t end =clock();
usleep(interval-(end-begin));
}while((c =(gx_getch(gx_env)))!=K_QUIT);

gx_end(gx_env);
free_moondata(moondata);	return 0;}
