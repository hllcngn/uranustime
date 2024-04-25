cwindow1:
	gcc -ocwindow1	ncurses/ncurses_env.c \
			windows/mainwin.c \
			windows/win.c \
			windows/otherwin.c \
			windows/windows.c \
			main.c			-Ihdr \
						-Iwindows	-lncurses
xwindow1:
	#don't forget to export DISPLAY=:0.0
	gcc -oxwindow1	xlib/xlib_env.c \
			windows/windows.c \
			windows/mainwin.c \
			windows/win.c \
			windows/otherwin.c \
			main.c			-Ihdr \
						-Iwindows	-lX11
clean:
	rm *.exe *.stackdump
.PHONY:	cwindow1 xwindow1
