#include <windows.h>

#include "xel-win32-gl.h"

namespace xel {
    namespace win32 {
        namespace gl {

            HGLRC g_glrc;
            HDC g_hdc;
        }

        extern HWND g_hwnd;
    }
}

using namespace xel::win32;
using namespace xel::win32::gl;

void gl::createGLContext() {

    PIXELFORMATDESCRIPTOR pfd = {
            sizeof(PIXELFORMATDESCRIPTOR),                              // nSize
            1,                                                          // nVersion
            PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER, // dwFlags
            PFD_TYPE_RGBA,                                              // iPixelType
            32,                                                         // cColorBits
            0, 0, 0, 0, 0, 0,
            0, 0,
            0,                  // AccumBits
            0, 0, 0, 0,
            32,                 // Depth
            8,                  // Stencil
            0,                  // Aux
            PFD_MAIN_PLANE,
            0,
            0, 0, 0
    };

    g_hdc = GetDC(g_hwnd);

    int pixelFormat = ChoosePixelFormat(g_hdc, &pfd);

    SetPixelFormat(g_hdc, pixelFormat, &pfd);

    g_glrc = wglCreateContext(g_hdc);

    wglMakeCurrent (g_hdc, g_glrc);
}

void gl::deleteGLContext() {

    wglMakeCurrent(NULL, NULL);
    wglDeleteContext(g_glrc);

    ReleaseDC(g_hwnd, g_hdc);
}
