#include <afxres.h>
#include "../xel-keyboard-codes.h"

#include "xel-win32.h"

using namespace xel;

unsigned long long win32::virtualCodeToXCode(unsigned long long vcode) {

    if (vcode == VK_BACK)
        return Xel_Key_Back;

    else if (vcode == VK_TAB)
        return Xel_Key_Tab;

    else if (vcode == VK_RETURN)
        return Xel_Key_Return;

    else if (vcode == VK_PAUSE)
        return Xel_Key_Pause;

    else if (vcode == VK_CAPITAL)
        return Xel_Key_CapsLock;

    else if (vcode == VK_ESCAPE)
        return Xel_Key_Escape;

    else if (vcode == VK_SPACE)
        return Xel_Key_Space;

    else if (vcode == VK_PRIOR)
        return Xel_Key_PageUp;

    else if (vcode == VK_NEXT)
        return Xel_Key_PageDown;

    else if (vcode == VK_END)
        return Xel_Key_End;

    else if (vcode == VK_HOME)
        return Xel_Key_Home;

    else if (vcode == VK_LEFT)
        return Xel_Key_Left;

    else if (vcode == VK_UP)
        return Xel_Key_Up;

    else if (vcode == VK_RIGHT)
        return Xel_Key_Right;

    else if (vcode == VK_DOWN)
        return Xel_Key_Down;

    else if (vcode == VK_SNAPSHOT)
        return Xel_Key_PrintScreen;

    else if (vcode == VK_INSERT)
        return Xel_Key_Insert;

    else if (vcode == VK_DELETE)
        return Xel_Key_Delete;

    else if (vcode == 0x30)
        return Xel_Key_0;

    else if (vcode == 0x31)
        return Xel_Key_1;

    else if (vcode == 0x32)
        return Xel_Key_2;

    else if (vcode == 0x33)
        return Xel_Key_3;

    else if (vcode == 0x34)
        return Xel_Key_4;

    else if (vcode == 0x35)
        return Xel_Key_5;

    else if (vcode == 0x36)
        return Xel_Key_6;

    else if (vcode == 0x37)
        return Xel_Key_7;

    else if (vcode == 0x38)
        return Xel_Key_8;

    else if (vcode == 0x39)
        return Xel_Key_9;

    else if (vcode == 0x41)
        return Xel_Key_A;

    else if (vcode == 0x42)
        return Xel_Key_B;

    else if (vcode == 0x43)
        return Xel_Key_C;

    else if (vcode == 0x44)
        return Xel_Key_D;

    else if (vcode == 0x45)
        return Xel_Key_E;

    else if (vcode == 0x46)
        return Xel_Key_F;

    else if (vcode == 0x47)
        return Xel_Key_G;

    else if (vcode == 0x48)
        return Xel_Key_H;

    else if (vcode == 0x49)
        return Xel_Key_I;

    else if (vcode == 0x4A)
        return Xel_Key_J;

    else if (vcode == 0x4B)
        return Xel_Key_K;

    else if (vcode == 0x4C)
        return Xel_Key_L;

    else if (vcode == 0x4D)
        return Xel_Key_M;

    else if (vcode == 0x4E)
        return Xel_Key_N;

    else if (vcode == 0x4F)
        return Xel_Key_O;

    else if (vcode == 0x50)
        return Xel_Key_P;

    else if (vcode == 0x51)
        return Xel_Key_Q;

    else if (vcode == 0x52)
        return Xel_Key_R;

    else if (vcode == 0x53)
        return Xel_Key_S;

    else if (vcode == 0x54)
        return Xel_Key_T;

    else if (vcode == 0x55)
        return Xel_Key_U;

    else if (vcode == 0x56)
        return Xel_Key_V;

    else if (vcode == 0x57)
        return Xel_Key_W;

    else if (vcode == 0x58)
        return Xel_Key_X;

    else if (vcode == 0x59)
        return Xel_Key_Y;

    else if (vcode == 0x5A)
        return Xel_Key_Z;

    else if (vcode == VK_NUMPAD0)
        return Xel_Key_Num_0;

    else if (vcode == VK_NUMPAD1)
        return Xel_Key_Num_1;

    else if (vcode == VK_NUMPAD2)
        return Xel_Key_Num_2;

    else if (vcode == VK_NUMPAD3)
        return Xel_Key_Num_3;

    else if (vcode == VK_NUMPAD4)
        return Xel_Key_Num_4;

    else if (vcode == VK_NUMPAD5)
        return Xel_Key_Num_5;

    else if (vcode == VK_NUMPAD6)
        return Xel_Key_Num_6;

    else if (vcode == VK_NUMPAD7)
        return Xel_Key_Num_7;

    else if (vcode == VK_NUMPAD8)
        return Xel_Key_Num_8;

    else if (vcode == VK_NUMPAD9)
        return Xel_Key_Num_9;

    else if (vcode == VK_MULTIPLY)
        return Xel_Key_Multiply;

    else if (vcode == VK_ADD)
        return Xel_Key_Add;

    else if (vcode == VK_SUBTRACT)
        return Xel_Key_Subtract;

    else if (vcode == VK_DECIMAL)
        return Xel_Key_Decimal;

    else if (vcode == VK_DIVIDE)
        return Xel_Key_Divide;

    else if (vcode == VK_F1)
        return Xel_Key_F1;

    else if (vcode == VK_F2)
        return Xel_Key_F2;

    else if (vcode == VK_F3)
        return Xel_Key_F3;

    else if (vcode == VK_F4)
        return Xel_Key_F4;

    else if (vcode == VK_F5)
        return Xel_Key_F5;

    else if (vcode == VK_F6)
        return Xel_Key_F6;

    else if (vcode == VK_F7)
        return Xel_Key_F7;

    else if (vcode == VK_F8)
        return Xel_Key_F8;

    else if (vcode == VK_F9)
        return Xel_Key_F9;

    else if (vcode == VK_F10)
        return Xel_Key_F10;

    else if (vcode == VK_F11)
        return Xel_Key_F11;

    else if (vcode == VK_F12)
        return Xel_Key_F12;

    else if (vcode == VK_NUMLOCK)
        return Xel_Key_NumLock;

    else if (vcode == VK_SCROLL)
        return Xel_Key_ScrollLock;

    else if (vcode == VK_SHIFT)
        return Xel_Key_Shift;

    else if (vcode == VK_CONTROL)
        return Xel_Key_Control;

    else if (vcode == 192)
        return Xel_Key_Tilde;

    else if (vcode == 219)
        return Xel_Key_Left_Square;

    else if (vcode == 221)
        return Xel_Key_Right_Square;

    else if (vcode == 220)
        return Xel_Key_Back_Slash;

    else if (vcode == 189)
        return Xel_Key_Dash;

    else if (vcode == 187)
        return Xel_Key_Equal;

    else if (vcode == 186)
        return Xel_Key_SemiColon;

    else if (vcode == 222)
        return Xel_Key_Quote;

    else if (vcode == 188)
        return Xel_Key_Comma;

    else if (vcode == 190)
        return Xel_Key_Dot;

    else if (vcode == 191)
        return Xel_Key_ForwardSlash;

    return Xel_Key_Unrecognized;
}
