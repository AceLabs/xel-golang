#ifndef XEL_WIN32_GOLANG_XEL_H
#define XEL_WIN32_GOLANG_XEL_H

#include "xel-window.h"
#include "xel-binding.h"

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

    namespace keyboard {

        void setCallbacks(  void (*onDown)(unsigned long long xcode),
                            void (*onUp)  (unsigned long long xcode) );
    }

    namespace mouse {

        void setCallbacks(void (*onMove)(int x, int y),
                          void (*onButton)(int button, int action, int x, int y),
                          void (*onScroll)(int amount));
    }
}

#endif
