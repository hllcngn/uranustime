c:
	gcc -ocwindow2 \
		src/main/main.c \
		src/gx/ncurses/ncurses_env.c \
		src/windows/ncurses/windowncurses.c \
			-Isrc/gx/common \
			-Isrc/gx/ncurses \
			-Isrc/windows/ncurses \
				-lncurses -Duse_ncurses
x:
	#don't forget to export DISPLAY=:0.0
	gcc -oxwindow2	src/xlib/xlib_env.c \
			src/windows/windows.c \
			src/windows/mainwin.c \
			src/windows/win.c \
			src/windows/otherwin.c \
			src/main.c			-Isrc/inc \
							-Isrc/windows	-lX11
clean:
	rm *.exe *.stackdump
.PHONY:	cwindow1 xwindow1
