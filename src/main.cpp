#include <iostream>

#include "xel/xel.h"

using namespace std;

void OnKeyDown(unsigned long long xcode) {
    printf("key down %i\n", xcode);
}

void OnKeyUp(unsigned long long xcode) {
    printf("key up %i\n", xcode);
}

void OnMouseMove(int x, int y) {
//    printf("mouse move\n");
}

void OnMouseButton(xel::mouse::Button button, xel::mouse::Action action, int x, int y) {
    printf("mouse button\n");
}

void OnMouseScroll(int amount) {
    printf("mouse scroll\n");
}

void OnResize(int w, int h) {
}

void OnTick() {
}

void Init() {
}

void Uninit() {
}

int main(int argc, char** argv) {
    xel::init();

    xel::window::setCallbacks(OnResize, Init, Uninit);
    xel::keyboard::setCallbacks(OnKeyDown, OnKeyUp);
    xel::mouse::setCallbacks(OnMouseMove, OnMouseButton, OnMouseScroll);

    xel_window_setTitle("Go Bellina! v0.01");
    xel_window_setPosition(400,200);
    xel_window_setSize(1280,800);

    xel::loop( OnTick );

    xel::uninit();

    printf("Good bye.\n");

    return 0;
}