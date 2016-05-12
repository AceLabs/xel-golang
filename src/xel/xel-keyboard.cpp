#include "xel.h"
#include "xel-keyboard.h"

using namespace xel;
using namespace xel::keyboard::_;

namespace xel {
    namespace keyboard {
        namespace _ {
            void (*g_onDown)(unsigned long long xcode) = 0;
            void (*g_onUp)(unsigned long long xcode) = 0;
        }
    }
}

void keyboard::setCallbacks(  void (*onDown)(unsigned long long xcode),
                              void (*onUp)  (unsigned long long xcode) ) {

    g_onDown = onDown;
    g_onUp = onUp;
}
