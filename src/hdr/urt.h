#ifndef URT_H
#define URT_H

#include <time.h>//time,clock
#include <unistd.h>//usleep

#define K_QUIT      'q'
#define K_SETTINGS  's'

#define MOON_NB   6


typedef struct{
	char*		name;
	float		orbital_period;		}MoonData;


MoonData**	get_moondata(void);
void	free_moondata(MoonData** md);

#endif
