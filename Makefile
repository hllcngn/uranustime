c:
	gcc -ocut	src/main.c \
			src/moondata.c \
			src/ncurses/g_ncurses.c		-Ihdr	-lncurses

x:
	#don't forget to export DISPLAY=:0.0
	gcc -oxut	src/main.c \
			src/moondata.c \
			src/libx/g_libx.c		-Ihdr	-lX11
