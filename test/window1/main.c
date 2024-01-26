#ifdef CURSES_H
# include "ncurses_struct.h"
#else
# include "xlib_struct.h"
#endif

#include "urt.h"
#include "gx.h"
#include "windows.h"
#include <time.h>
#include <unistd.h>//usleep

int main(int ac, char** av){
gx_env* env;
gx_start(&env);
win_create_window();
gx_win* otherwin =otherwin_create_window();
int c =0, interval =CLOCKS_PER_SEC/FPS; do{
clock_t begin =clock();

clock_t end =clock();
usleep(interval-(end-begin));
}while((c =(gx_getch(env)))!=K_QUIT);
otherwin->update();
gx_end(env);
return 0;}
