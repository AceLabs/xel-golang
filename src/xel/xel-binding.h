#ifndef XEL_WIN32_GOLANG_XEL_BINDING_H
#define XEL_WIN32_GOLANG_XEL_BINDING_H

void xel_quit();

void xel_window_setTitle(const char* title);
void xel_window_setPosition(int left, int top);
void xel_window_setSize(int width, int height);

#endif
