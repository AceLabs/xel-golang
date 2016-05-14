#ifndef XEL_WIN32_GOLANG_XEL_MOUSE_H
#define XEL_WIN32_GOLANG_XEL_MOUSE_H

namespace xel {
    namespace mouse {

        namespace _ {

            extern void (*g_onMove)(int x, int y);
            extern void (*g_onButton)(int button, int action, int x, int y);
            extern void (*g_onScroll)(int amount);
        }
    }
}

#endif
