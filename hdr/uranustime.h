#ifndef URANUSTIME_H
#define URANUSTIME_H

#define MOON_NB	6

#define K_QUIT		'q'
#define K_SETTINGS	's'

typedef struct{
	char*	name;
	float	orbital_period; }MoonData;

MoonData** get_moondata(void);
void	free_moondata(MoonData** md);

#endif
