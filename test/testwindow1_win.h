#include <stdio.h>

#undef WINDOW_NAME
#define WINDOW_NAME win
#undef WINDOW_PREFIXXX
#define WINDOW_PREFIXXX(prefix,function) prefix ## function
#undef WINDOW_PREFIXX
#define WINDOW_PREFIXX(prefix,function) WINDOW_PREFIXXX(prefix,function)
#undef WINDOW_PREFIX
#define WINDOW_PREFIX(function) WINDOW_PREFIXX(WINDOW_NAME,function)

void WINDOW_PREFIX(_create_window)(void){
printf("boo");
return;}

void WINDOW_PREFIX(_update)(void){
printf("\nwin update");
return;}
