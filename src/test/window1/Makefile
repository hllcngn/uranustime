cwindow1:
	gcc -ocwindow1	src/ncurses/ncurses_env.c \
			src/windows/mainwin.c \
			src/windows/win.c \
			src/windows/otherwin.c \
			src/windows/windows.c \
			src/main.c			-Isrc/inc \
							-Isrc/windows	-lncurses
xwindow1:
	#don't forget to export DISPLAY=:0.0
	gcc -oxwindow1	src/xlib/xlib_env.c \
			src/windows/windows.c \
			src/windows/mainwin.c \
			src/windows/win.c \
			src/windows/otherwin.c \
			src/main.c			-Isrc/inc \
							-Isrc/windows	-lX11
clean:
	rm *.exe *.stackdump
.PHONY:	cwindow1 xwindow1
