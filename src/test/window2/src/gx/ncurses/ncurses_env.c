//IMPLEMENTATION OF ENV & DRAWING FUNCTIONS FOR NCURSES
#include <ncurses.h>
#include "ncurses_env.h"

gx_env*	envfunct(gx_env* env){
	env->foo =5;
return(env);}
