#include "uranustime.h"
#include "g_hdr.h"
#include <time.h>//time
#include <stdlib.h>//srand

int	main(int ac, char **av){
void	*gx_env; if (gx_init(&gx_env)==-1) return -1;
MoonData** moondata =get_moondata();
srand(time(NULL));

/*
for (int i=0,l=10;i<MOON_NB;i++,l+=10){
	gx_printw(gx_env,gx_env->wid[IDMD], 10,l, moondata[i]->name);}
*/

do{
}while(gx_getch(gx_env)!=K_QUIT);
//gx_freewindow(win1);
gx_end(gx_env);
free_moondata(moondata);
return 0;}
