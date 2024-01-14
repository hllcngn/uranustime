#ifndef G_HDR_H
#define G_HDR_H

typedef struct{ int x,y; }vect;


void	*gx_init();
void	gx_end(void *gx_env);

void	*gx_window(void* gx_env, int x,int y,int w,int h, char *title);
void	gx_freewindow(void* win);

char	gx_getch(void *gx_env);

void	gx_hello(void *gx_env);
void	gx_print(void *env, int x,int y, char* str);
void	gx_printw(void *env,void* win, int x,int y, char* str);

void	gx_circle(void *gx_env);
void	gx_point(void *gx_env);
void	gx_ellipse(void *gx_env);
void	gx_square_ellipse(void *gx_env);
void	gx_rect(void* env, int x,int y,int w,int h);

#endif
