#include <stdio.h>
#include <time.h>
#include <unistd.h>//usleep

int main(int ac, char** av){
int i=0, j=0;
unsigned int interval =CLOCKS_PER_SEC/60;
clock_t begin =clock();
clock_t end =begin;
clock_t begin2 =clock();
while(1){
printf(" %i",i);	i++;
end +=clock()-begin2;
if (end-begin>=interval){
	begin =begin2 =end =clock();
	printf("\nFRAME %i",j);	j++;
	i=0;}
}
return 0;}
