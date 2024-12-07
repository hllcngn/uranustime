//MAIN.C COMMON TO BOTH GRAPHICS LIBRARIES
#include "gx.h"
#include "windowncurses.h"
#include <stdio.h>
#include <stdlib.h>

void main(){

gx_env* env =malloc(sizeof(gx_env));

envfunct(env);
printf("foo =%i\n",env->foo);

win_winfunct(env);
printf("foo =%i\n",env->foo);

free(env);
return;}
