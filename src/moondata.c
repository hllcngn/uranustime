#include "uranustime.h"
#include <stdlib.h>//malloc
#include <string.h>//strdup

MoonData** get_moondata(void){
MoonData** md =(MoonData**)malloc(sizeof(MoonData*)*MOON_NB);
for (int i=0;i<MOON_NB;i++) md[i] =(MoonData*)malloc(sizeof(MoonData));
md[0]->name =strdup("Mab");
md[0]->orbital_period =22.152f;
md[1]->name =strdup("Miranda");
md[1]->orbital_period =33.923496f;
md[2]->name =strdup("Ariel");
md[2]->orbital_period =60.48f;
md[3]->name =strdup("Umbriel");
md[3]->orbital_period =99.456f;
md[4]->name =strdup("Titania");
md[4]->orbital_period =208.949616f;
md[5]->name =strdup("Oberon");
md[5]->orbital_period =323.117616f;
return md;}
void	free_moondata(MoonData** md){
for (int i=0;i<MOON_NB;i++) free(md[i]);
return;}
