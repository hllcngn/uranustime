#include <ncurses.h>
#include <time.h>
#include <unistd.h>
#include <math.h>

#define FPS 1

int main(int ac, char** av){
initscr(); curs_set(0); noecho();
attron(A_REVERSE);

struct tm origin ={.tm_mon=1,.tm_mday=14};
struct tm now ={};

float t, percent=0;
time_t start, end;
do {
start =clock();
//erase();
percent+=.01;
t=2*M_PI*(percent-.25);
int x,y;
x =9*cosf(t) +14.5;
y =5*sinf(t) +6.5;
mvaddch(y,x,' ');
mvaddch(6,14,' ');
refresh();
end =clock();
usleep(1000000/FPS-(end-start));
} while(1);

//getch();
endwin(); return 0;}
