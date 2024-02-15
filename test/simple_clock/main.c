#include <ncurses.h>
#include <time.h>
#include <unistd.h>
#include <math.h>

#define FPS 8

int main(int ac, char** av){
initscr(); curs_set(0); noecho();
attron(A_REVERSE);


float t, percent=0;
time_t start, end;
do {
start =clock();
erase();
percent+=.05;
t=2*M_PI*(percent-.25);
int x,y;
x =8*cosf(t) +14;
y =4*sinf(t) +6;
mvaddch(y,x,' ');
mvaddch(6,14,' ');
refresh();
end =clock();
usleep(CLOCKS_PER_SEC/FPS-(end-start));
} while(1);

getch();
endwin(); return 0;}
