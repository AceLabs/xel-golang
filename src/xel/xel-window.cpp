#include "xel.h"
#include "win32/xel-win32.h"

using namespace xel;
using namespace xel::window::_;

namespace xel {
    namespace window {

        int width = 0, height = 0;

        namespace _ {
            void (*g_onResize)(int w, int h) = 0;
            void (*g_onBeforeGLDeleted)() = 0;
        }
    }
}

void window::setCallbacks(
        void (*onResize)(int w, int h),
        void (*onAfterGLCreated)(),
        void (*onBeforeGLDeleted)() ) {

    g_onResize = onResize;
    g_onBeforeGLDeleted = onBeforeGLDeleted;

    // since gl context is created at xel::init(), it should be safe to call this.
    if (onAfterGLCreated)
        onAfterGLCreated();
}

void xel_window_setPosition(int left, int top) {

    xel::win32::setPosition(left,top);
}

void xel_window_setSize(int width, int height) {

    xel::win32::setSize(width, height);
}

void xel_window_setTitle(const char* title) {

    xel::win32::setTitle(title);
}