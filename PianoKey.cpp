// PianoKey.cpp - ���� ���������� ��� ������ PianoKey.

#include "PianoKey.h"
#include <iostream>

PianoKey::PianoKey(char keyChar) : keyChar(keyChar), pressed(false) {}

void PianoKey::pressKey() {
    pressed = true;
    // ����� ����� ���� ��� ��� ��������������� �����
    std::cout << keyChar << " is pressed" << std::endl;
}

void PianoKey::releaseKey() {
    pressed = false;
    std::cout << keyChar << " is released" << std::endl;
}

bool PianoKey::isPressed() const {
    return pressed;
}
char PianoKey::getKeyChar() const {
    return keyChar;
}