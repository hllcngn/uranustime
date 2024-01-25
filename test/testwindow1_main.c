#include "testwindow1_win.h"
#include "testwindow1_otherwin.h"

#ifdef LINES
#include "testwindow1_struct.h"
#else
#include "testwindow1_struct2.h"
#endif

int main(int ac, char** av){
win_create_window();
gx_win* otherwin =otherwin_create_window();
otherwin->update();
return 0;}
