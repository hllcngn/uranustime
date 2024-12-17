#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(int ac, char** av) {

struct tm	*tm0 = (struct tm*)malloc(sizeof(struct tm));
time_t	t0, t;
double	dt, percent, oberon = 579600;

tm0->tm_sec = 0;
tm0->tm_min = 0;
tm0->tm_hour = 0;
tm0->tm_mday = 19;
tm0->tm_mon = 11;
tm0->tm_year = 124;

t0 = mktime(tm0);
time(&t);

dt = difftime(t0, t);
percent = 100 - dt * 100 / oberon;

printf("1/2 oberon before 19/12/24:0:0:0 - %3.2f%%\n", percent);

free(tm0);
return 0;}
