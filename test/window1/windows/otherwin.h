#pragma once
#include "windows_commons.h"

#undef WINDOW_NAME
#define WINDOW_NAME otherwin
#undef WINDOW_PREFIXXX
#define WINDOW_PREFIXXX(prefix,function) prefix ## function
#undef WINDOW_PREFIXX
#define WINDOW_PREFIXX(prefix,function) WINDOW_PREFIXXX(prefix,function)
#undef WINDOW_PREFIX
#define WINDOW_PREFIX(function) WINDOW_PREFIXX(WINDOW_NAME,function)

gx_win *WINDOW_PREFIX(_create_window)(void);

void WINDOW_PREFIX(_update)(void);
