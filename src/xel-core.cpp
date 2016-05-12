#include <cstdio>

#include "xel.h"
#include "win32/xel-win32.h"

using namespace xel;
using namespace xel::window::_;

namespace xel {
    namespace window {
        int width = 0;
        int height = 0;
    }
}

void xel::init() {
    win32::createMainWindow();
}

void xel::uninit() {

}

void xel::loop(void (*tickCallback)()) {
    MSG msg;

    while (true) {
        while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE) == TRUE) {
            if (msg.message == WM_QUIT)
                return;

            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }

        // Resize must have been called once
        //todo if (Window::Internal::g_ResizeCount > 0)
            tickCallback();
    }
}
