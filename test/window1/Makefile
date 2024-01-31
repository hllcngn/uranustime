cwindow1:
	gcc -ocwindow1	ncurses/ncursestest.c \
			ncurses/ncurses_env.c \
			windows/win.c \
			windows/otherwin.c \
			main.c			-Ihdr \
						-Iwindows	-lncurses
xwindow1:
	#don't forget to export DISPLAY=:0.0
	gcc -oxwindow1	xlib/xlib_env.c \
			windows/otherwin.c \
			windows/win.c \
			main.c			-Ihdr \
						-Iwindows	-lX11
clean:
	rm *.exe *.stackdump
.PHONY:	cwindow1 xwindow1
