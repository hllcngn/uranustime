#include "otherwin.h"

gx_win *WINDOW_PREFIX(_create_window)(void){
printf("boo");
printf("boo");
gx_win	*win =(gx_win*)malloc(sizeof(gx_win));
win->title ="win";
win->update =&otherwin_update;
return win;}

void WINDOW_PREFIX(_update)(void){
printf("\notherwin update");
return;}
