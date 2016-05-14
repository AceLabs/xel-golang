#include <windows.h>
#include <cstdio>

#include <GL/glew.h>

#include "../xel-window.h"

#include "xel-win32.h"
#include "xel-win32-handle-messages.h"
#include "xel-win32-gl.h"

using namespace xel;
using namespace xel::win32;

LRESULT CALLBACK Win32_WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);

namespace xel {
    namespace win32 {

        HWND g_hwnd;

        namespace _ {

            void registerWindowClass(WNDPROC wndProc);
            bool isMouseMsg(UINT msg);
            HWND createMainWindowEx();
        }
    }
}

using namespace xel::win32::_;

void win32::setTitle(const char* title) {
    SetWindowText(g_hwnd, title);
}

void win32::setPosition(int left, int top) {
    SetWindowPos(g_hwnd, 0, left, top, -1, -1, SWP_NOZORDER | SWP_NOSIZE | SWP_SHOWWINDOW);
}

void win32::setSize(int width, int height) {
    SetWindowPos(g_hwnd, 0, -1, -1, width, height, SWP_NOZORDER | SWP_NOMOVE | SWP_SHOWWINDOW);
}

void win32::createMainWindow() {
    registerWindowClass(Win32_WndProc);

    g_hwnd = createMainWindowEx();

    ShowWindow(g_hwnd, SW_SHOW);
    UpdateWindow(g_hwnd);
}

void _::registerWindowClass(WNDPROC wndProc) {
    WNDCLASSEX wc;

    wc.cbSize        = sizeof(WNDCLASSEX);
    wc.style         = CS_OWNDC | CS_HREDRAW | CS_VREDRAW;
    wc.lpfnWndProc   = wndProc;
    wc.cbClsExtra    = 0;
    wc.cbWndExtra    = 0;
    wc.hInstance     = GetModuleHandle(0);
    wc.hIcon         = LoadIcon(NULL, IDI_APPLICATION);
    wc.hCursor       = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
    wc.lpszMenuName  = NULL;
    wc.lpszClassName = "AceWindowClass";
    wc.hIconSm       = LoadIcon(NULL, IDI_APPLICATION);

    if (!RegisterClassEx(&wc))
        throw "Failed to register window class.";
}

HWND _::createMainWindowEx() {
    HWND hwnd = CreateWindowEx(
            WS_EX_CLIENTEDGE,
            "AceWindowClass",
            "The title of my window",
            WS_OVERLAPPEDWINDOW,
            CW_USEDEFAULT,
            CW_USEDEFAULT,
            800,
            600,
            NULL,
            NULL,
            GetModuleHandle(0),
            NULL);

    if (hwnd == NULL)
        throw "Could not create window handle.";

    return hwnd;
}

bool _::isMouseMsg(UINT msg) {
    return msg == WM_MOUSEMOVE
           || msg == WM_LBUTTONDOWN
           || msg == WM_LBUTTONUP
           || msg == WM_RBUTTONDOWN
           || msg == WM_RBUTTONUP
           || msg == WM_MBUTTONDOWN
           || msg == WM_MBUTTONUP
           || msg == WM_MOUSEWHEEL;
}

LRESULT CALLBACK Win32_WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {

    if (isMouseMsg(msg))
        win32::_::handleMouseEvent(msg, wParam, lParam);

    if (msg == WM_KEYDOWN || msg == WM_KEYUP)
        win32::_::handleKeyboardEvent(msg, wParam, lParam);

    else if (msg == WM_SIZE)
        win32::_::handleResize(LOWORD(lParam), HIWORD(lParam));

    else if (msg == WM_CREATE) {
        gl::createGLContext();

        glewInit();

        printf("OpenGL/GLEW context created\n");
    }

    else if (msg == WM_CLOSE) {
        if (window::_::g_onBeforeGLDeleted)
            window::_::g_onBeforeGLDeleted();

        printf("Deleting OpenGL context...\n");
        gl::deleteGLContext();

        printf("Destroying Window...\n");
        DestroyWindow(g_hwnd);

        printf("Unregistering Window Class...\n");
        UnregisterClass("AceWindowClass", GetModuleHandle(0));
    }
    else if (msg == WM_DESTROY) {
         PostQuitMessage(0);
     }

    else
        return DefWindowProc(hwnd, msg, wParam, lParam);

    return 0;
}