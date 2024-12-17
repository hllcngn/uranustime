all:
	gcc hello_world.c -I /opt/X11/include  -L/opt/X11/lib -lX11
