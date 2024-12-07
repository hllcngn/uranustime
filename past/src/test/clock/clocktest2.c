#include <stdio.h>
#include <time.h>
#include <unistd.h>//usleep

int main(int ac, char** av){
int i=0;
unsigned int interval =CLOCKS_PER_SEC/60;
clock_t begin =clock();
while(1){
printf("\nFRAME %i",i);	i++;
clock_t end =clock();
usleep(interval-(begin-end));
begin =clock();
}
return 0;}
