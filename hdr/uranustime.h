#ifndef URANUSTIME_H
#define URANUSTIME_H

#define MOON_NB	6

typedef struct{
	char*	name;
	float	orbital_period; }MoonData;

MoonData** get_moondata(void);
void	free_moondata(MoonData** md);

#endif
