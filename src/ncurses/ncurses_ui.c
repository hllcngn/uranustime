#include "ncurse.h"

void gx_draw_moondata(void* env, MoonData** md){
for(int i=0,y=1;i<MOON_NB && y<MDH;i++,y++)
	gx_printw(env,_WMD, 2,y, md[i]->name);
return;}

void gx_wredraw(void* win){
return;}

void gx_display_settings(void* env){
if(!_WSETTING->is_displayed){
	box(_WSETTING->id, 0,0);
	mvwprintw(_WSETTING->id, 0,2, _WSETTING->title);
	wrefresh(_WSETTING->id);
	_WSETTING->is_displayed =1;}
else if(_WSETTING->is_displayed ==1){
	werase(_WSETTING->id);
	wrefresh(_WSETTING->id);
	wrefresh(_WVIEW->id);
	wrefresh(_W1->id);
	wrefresh(_WMD->id);
	_WSETTING->is_displayed =0;}
return;}
