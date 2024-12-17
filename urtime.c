#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(int ac, char** av) {

time_t	t0, t;
struct tm	*tm0 = (struct tm*)malloc(sizeof(struct tm));
double	dt = 0;
int	umbriel, hours, minutes, seconds;

tm0->tm_sec = 0;
tm0->tm_min = 0;
tm0->tm_hour = 16;
tm0->tm_mday = 5;
tm0->tm_mon = 6;
tm0->tm_year = 123;

t0 = mktime(tm0);
time(&t);

dt = difftime(t, t0);
hours = dt/3600;
umbriel = hours/100 + 1;
hours = hours - (umbriel-1)*100;
minutes = (int)dt%3600/60;
seconds = (int)dt%60;

printf("U%i H%i:M%i:S%i\n", umbriel, hours, minutes, seconds);

return 0;}
