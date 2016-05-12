#ifndef XEL_WIN32_GOLANG_XEL_WIN32_HANDLE_MESSAGES_H
#define XEL_WIN32_GOLANG_XEL_WIN32_HANDLE_MESSAGES_H

#include <windef.h>

namespace xel {
    namespace win32 {
        namespace _ {
            void handleMouseEvent(UINT msg, WPARAM wParam, LPARAM lParam);
            void handleKeyboardEvent(UINT msg, WPARAM wParam, LPARAM lParam);
            void handleResize(int w, int h);
        }
    }
}

#endif //XEL_WIN32_GOLANG_XEL_WIN32_HANDLE_MESSAGES_H
