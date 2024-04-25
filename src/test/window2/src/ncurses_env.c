#include <ncurses.h>
#include "ncurses_env.h"

gx_env*	funct(gx_env* env){
	env->foo =5;
return(env);}
