#include "xel.h"
#include "xel-mouse.h"

using namespace xel;
using namespace xel::mouse::_;

namespace xel {
    namespace mouse {
        namespace _ {

            void (*g_onMove)(int x, int y) = 0;
            void (*g_onButton)(Button button, Action action, int x, int y) = 0;
            void (*g_onScroll)(int amount) = 0;
        }
    }
}

void mouse::setCallbacks(  void (*onMove)(int x, int y),
                           void (*onButton)(Button button, Action action, int x, int y),
                           void (*onScroll)(int amount)) {

    g_onMove = onMove;
    g_onButton = onButton;
    g_onScroll = onScroll;
}

