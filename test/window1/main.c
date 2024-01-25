#ifdef CURSES_H
# include "ncurses_struct.h"
#else
# include "xlib_struct.h"
#endif

#include "win.h"
#include "otherwin.h"

int main(int ac, char** av){
win_create_window();
gx_win* otherwin =otherwin_create_window();
otherwin->update();
return 0;}
