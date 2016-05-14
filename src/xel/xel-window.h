#ifndef XEL_WIN32_GOLANG_XEL_WINDOW_H
#define XEL_WIN32_GOLANG_XEL_WINDOW_H

namespace xel {
    namespace window {
        namespace _ {
            extern void (*g_onResize)(int w, int h);
            extern void (*g_onBeforeGLDeleted)();
        }
    }
}

#endif
