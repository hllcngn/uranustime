#include "urt.h"
#include "gx.h"
#include "windows.h"
#include <time.h>
#include <unistd.h>//usleep

int main(int ac, char** av){
gx_env* env; if (gx_start((void**)&env) ==-1) return -1;
//TODO moondata

int c =0, interval =CLOCKS_PER_SEC/FPS; do{
clock_t begin =clock();

switch(c){
case K_SETTINGS:
	//TODO display settings window
	break;
default: break;}

update_windows(env);

clock_t end =clock();
usleep(interval-(end-begin));
}while((c =(gx_getch(env)))!=K_QUIT);

gx_end(env);	return 0;}
