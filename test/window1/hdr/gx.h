#ifndef GX_H
#define GX_H

#define FPS	60

int	gx_start(gx_env** env);
void	gx_end(gx_env* env);

int	gx_getch(gx_env* env);

#endif
