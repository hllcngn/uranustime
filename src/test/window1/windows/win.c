#include "win.h"

gx_win* WINDOW_PREFIX(_create_window)(gx_env* env){
printf("boo");
gx_win	*win =malloc(sizeof(gx_win));
win->title ="win";
win->update =&WINDOW_PREFIX(_update);
win->destroy =&WINDOW_PREFIX(_destroy);
return win;}

void WINDOW_PREFIX(_destroy)(gx_env* env){
return;}


void WINDOW_PREFIX(_update)(void){
printf("\nwin update");
return;}
