#include <afxres.h>
#include <windowsx.h>

#include "../xel.h"

#include "../xel-keyboard.h"
#include "../xel-mouse.h"
#include "../xel-enums.h"

#include "xel-win32.h"
#include "xel-win32-handle-messages.h"


using namespace xel;

using namespace xel::window::_;

using namespace xel::keyboard::_;

using namespace xel::mouse;
using namespace xel::mouse::_;

void win32::_::handleResize(int w, int h){
    window::width = w;
    window::height = h;

    //todo glViewport(0, 0, w, h);

    if (g_onResize) g_onResize(w, h);
}

void win32::_::handleKeyboardEvent(UINT msg, WPARAM wParam, LPARAM lParam) {
    unsigned long long  previousState = lParam & 0x40000000;

    if (msg == WM_KEYDOWN && previousState == 0 /* up */ )
        g_onDown(win32::virtualCodeToXCode(wParam));

    else if (msg == WM_KEYUP )
        g_onUp(win32::virtualCodeToXCode(wParam));
}

void win32::_::handleMouseEvent(UINT msg, WPARAM wParam, LPARAM lParam) {
    int x = GET_X_LPARAM(lParam);
    int y = GET_Y_LPARAM(lParam);

    if (msg == WM_MOUSEMOVE)
        g_onMove(x, y);

    else if (msg == WM_LBUTTONDOWN)
        g_onButton(Xel_Mouse_Button_Left, Xel_Action_Down, x, y);

    else if (msg == WM_LBUTTONUP)
        g_onButton(Xel_Mouse_Button_Left, Xel_Action_Up, x, y);

    else if (msg == WM_RBUTTONDOWN)
        g_onButton(Xel_Mouse_Button_Right, Xel_Action_Down, x, y);

    else if (msg == WM_RBUTTONUP)
        g_onButton(Xel_Mouse_Button_Right, Xel_Action_Up, x, y);

    else if (msg == WM_MBUTTONDOWN)
        g_onButton(Xel_Mouse_Button_Middle, Xel_Action_Down, x, y);

    else if (msg == WM_MBUTTONUP)
        g_onButton(Xel_Mouse_Button_Middle, Xel_Action_Up, x, y);

    else if (msg == WM_MOUSEWHEEL)
        g_onScroll(GET_WHEEL_DELTA_WPARAM(wParam));
}
