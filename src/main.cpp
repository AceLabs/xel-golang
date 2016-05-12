#include <iostream>

#include "xel.h"

using namespace std;

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

    xel::loop( OnTick );

    xel::uninit();

    printf("Good bye.\n");

    return 0;
}