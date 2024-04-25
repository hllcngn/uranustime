#include "gx.h"
#include <stdio.h>
#include <stdlib.h>

void main(){

gx_env* env =malloc(sizeof(gx_env));

funct(env);

printf("foo =%i\n",env->foo);
return;}
