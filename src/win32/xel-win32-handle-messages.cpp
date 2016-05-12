#include "xel-win32-handle-messages.h"
#include "../xel-window.h"
#include "../xel.h"

using namespace xel;
using namespace xel::window;
using namespace xel::window::_;

void _::handleResize(int w, int h){

    if (_::g_resizeCount > 0) {

        width = w;
        height = h;

//todo        glViewport(0, 0, w, h);

        if (g_onResize)
            g_onResize(w, h);
    }

    ++g_resizeCount;
}
