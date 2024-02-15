#include "win.h"

gx_win* WINDOW_PREFIX(_create_window)(gx_env* env){
printf("boo");
gx_win	*win =malloc(sizeof(gx_win));
return win;}

void WINDOW_PREFIX(_destroy)(gx_env* env){
return;}


void WINDOW_PREFIX(_update)(void){
printf("\nwin update");
return;}
