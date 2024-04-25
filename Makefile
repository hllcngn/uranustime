c:
	gcc -ocurt	src/main.c \
			src/moondata.c \
			src/ncurses/ncurses_ui.c \
			src/ncurses/g_ncurses.c		-Ihdr	-lncurses

x:
	#don't forget to export DISPLAY=:0.0
	gcc -oxurt	src/main.c \
			src/moondata.c \
			src/xlib/xlib_ui.c \
			src/xlib/g_xlib.c		-Ihdr	-lX11

clean:
	rm curt.exe xurt.exe *.stackdump
