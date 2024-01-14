#include "g_hdr.h"
#include <time.h>//time
#include <stdlib.h>//srand

int	main(int ac, char **av){
srand(time(NULL));
void	*gx_env = gx_init();

gx_hello(gx_env);
gx_point(gx_env);
gx_circle(gx_env);
gx_ellipse(gx_env);
gx_square_ellipse(gx_env);

void	*win1 = gx_window(8,4,40,9, "my_win");

gx_getch(gx_env);
gx_end(gx_env);
return 0;}
