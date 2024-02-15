# uranustime
This program will basically enable you to measure time based on the positions of the moons of Uranus.

### building
To make the ncurses version:
```
make c
```
To make the libx version:
```
make x
```

### adding a window
1) Copy the windows/window_template.h/c templates to windows/your_window.h/c.In the header, you just need to change #define NAME at the beginning to your_window. Then edit the C file with the intended basic behavior. Don't forget to change the #include at the beginning with "your_window.h".
2) Edit windows/windows.h:
- increment WIN_COUNT
- add to the defines list #define YOUR_WINDOW id
- add to the includes list #include "your_window.h"
3) Edit windows/windows.c: in create_windows, add your_window_create_window(env) to the list
4) [optional] Expand your windows' behavior in main.c.
