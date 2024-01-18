#include "g_libx.h"

void gx_draw_moondata(void* env, MoonData** md){
for(int i=0,y=20;i<MOON_NB && y<MDH;i++,y+=20){
	gx_printw(env,_WMD, 15,y, md[i]->name);
			}
return;}

void gx_display_settings(void* env){
if(!_WSETTING->is_displayed){
	XRaiseWindow(_disp,_WSETTING->id);
	_WSETTING->is_displayed =1;}
else if(_WSETTING->is_displayed ==1){
	XLowerWindow(_disp,_WSETTING->id);
	_WSETTING->is_displayed =0;}
return;}
