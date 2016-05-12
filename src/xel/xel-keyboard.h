#ifndef XEL_WIN32_GOLANG_XEL_KEYBOARD_H
#define XEL_WIN32_GOLANG_XEL_KEYBOARD_H

namespace xel {
    namespace keyboard {
        namespace _ {
            extern void (*g_onDown)(unsigned long long xcode);
            extern void (*g_onUp)(unsigned long long xcode);
        }
    }
}

#endif //XEL_WIN32_GOLANG_XEL_KEYBOARD_H
