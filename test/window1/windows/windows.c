#include "gx.h"
#include "windows.h"

void create_windows(gx_env* env){
env->windows =malloc(sizeof(gx_win*)*WIN_COUNT);
env->windows[MAIN] =main_create_window(env);
env->windows[WIN] =win_create_window(env);
env->windows[OTHERWIN] =otherwin_create_window(env);
return;}

void destroy_windows(gx_env* env){
for (int i=0;i<WIN_COUNT;i++)
	env->windows[i]->destroy();
free(env->windows);	return;}


void update_windows(gx_env* env){
for (int i=0;i<WIN_COUNT;i++)
	env->windows[i]->update();
return;}
