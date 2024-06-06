// Piano.cpp - файл реализации для класса Piano.

#include "Piano.h"
#include <iostream>

Piano::Piano() : keys{ PianoKey('Z'), PianoKey('X'), PianoKey('C'), PianoKey('V'), PianoKey('B'), PianoKey('N'), PianoKey('M') } {}

void Piano::pressKey(char keyChar) {
    for (PianoKey& key : keys) {
        if (key.getKeyChar() == keyChar) {
            key.pressKey();
            display();
            break;
        }
    }
}

void Piano::releaseAllKeys() {
    for (PianoKey& key : keys) {
        key.releaseKey();
    }
}
void Piano::display() {
    for (const PianoKey& key : keys) {
        std::cout << (key.isPressed() ? '#' : key.getKeyChar()) << ' ';
    }
    std::cout << std::endl;
}