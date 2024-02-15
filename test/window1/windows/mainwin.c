#include "mainwin.h"

gx_win* WINDOW_PREFIX(_create_window)(gx_env* env){
printf("boo");
gx_win	*win =malloc(sizeof(gx_win));
return win;}

void WINDOW_PREFIX(_update)(gx_env* env){
printf("\nwin update");
return;}


void WINDOW_PREFIX(_destroy)(void){
return;}
