#ifndef XEL_WIN32_GOLANG_XEL_WIN32_H
#define XEL_WIN32_GOLANG_XEL_WIN32_H

namespace xel {
    namespace win32 {
        void setPosition(int left, int top);
        void createMainWindow();
        unsigned long long virtualCodeToXCode(unsigned long long vcode);
    }
}

#endif //XEL_WIN32_GOLANG_XEL_WIN32_H
