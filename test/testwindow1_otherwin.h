#include <stdio.h>
#include "testwindow1_struct.h"
#include <stdlib.h>

#undef WINDOW_NAME
#define WINDOW_NAME otherwin
#undef WINDOW_PREFIXXX
#define WINDOW_PREFIXXX(prefix,function) prefix ## function
#undef WINDOW_PREFIXX
#define WINDOW_PREFIXX(prefix,function) WINDOW_PREFIXXX(prefix,function)
#undef WINDOW_PREFIX
#define WINDOW_PREFIX(function) WINDOW_PREFIXX(WINDOW_NAME,function)

void WINDOW_PREFIX(_update)(void){
printf("\notherwin update");
return;}

gx_win *WINDOW_PREFIX(_create_window)(void){
printf("boo");
printf("boo");
gx_win	*win =(gx_win*)malloc(sizeof(gx_win));
win->title ="win";
win->update =&otherwin_update;
return win;}
