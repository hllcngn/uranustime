#ifndef G_HDR_H
#define G_HDR_H


//#define _USE_MATH_DEFINES

typedef struct vect {
	int y;
	int x;
} vect;

void	*g_init();
void	g_end(void *g_env);

char	g_getch(void *g_env);

void	*g_window(int y, int x, int height, int width, char *title);

void	g_hello(void *g_env);
void	g_circle(void *g_env);
void	g_point(void *g_env);
void	g_ellipse(void *g_env);
void	g_square_ellipse(void *g_env);

#endif
