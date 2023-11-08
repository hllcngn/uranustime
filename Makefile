curses:
	gcc -o ut_curses	src/main.c src/g_ncurses.c	-Isrc	-lncurses

x:
	#don't forget to export DISPLAY=:0.0
	gcc -o ut_x		src/main.c src/g_libx.c		-Isrc	-lX11
