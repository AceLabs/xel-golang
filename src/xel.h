#ifndef XEL_WIN32_GOLANG_XEL_H
#define XEL_WIN32_GOLANG_XEL_H

#include "xel-window.h"

namespace xel {
    void init();
    void uninit();

    void loop(void (*tickCallback)());

    namespace window {

        extern int width, height;

        void setCallbacks(
                void (*onResize)(int w, int h),
                void (*onAfterGLCreated)(),
                void (*onBeforeGLDeleted)() );
    }
}

#endif