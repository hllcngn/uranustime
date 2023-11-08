#include "g_hdr.h"

int	main(int ac, char **av){
void	*g_env = g_init();

g_hello(g_env);
void	*win1 = g_window(4, 8, 9, 40, "my_win");

g_getch(g_env);
g_end(g_env);
return 0;}
