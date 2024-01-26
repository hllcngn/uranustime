cwindow1:
	gcc -ocwindow1	window1/ncurses/ncursestest.c \
			window1/ncurses/ncurses_env.c \
			window1/windows/win.c \
			window1/windows/otherwin.c \
			window1/main.c		-Iwindow1/hdr \
						-Iwindow1/windows	-lncurses
xwindow1:
	#don't forget to export DISPLAY=:0.0
	gcc -oxwindow1	window1/xlib/xlib_env.c \
			window1/windows/otherwin.c \
			window1/windows/win.c \
			window1/main.c		-Iwindow1/hdr \
						-Iwindow1/windows	-lX11
clean:
	rm *.exe *.stackdump
.PHONY:	cwindow1 xwindow1
