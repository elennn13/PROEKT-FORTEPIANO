// main.cpp - основной файл, который управляет 
// выполнением программы.

#include "Piano.h"
#include <iostream>
#include <conio.h> // Для _getch()

int main() {
    setlocale(LC_ALL, "ru");
    Piano piano;
    char keyPressed;

    std::cout << "Нажмите клавиши от Z до M для игры на фортепиано." << std::endl;
    std::cout << "Для выхода нажмите 'Q'." << std::endl;

    while ((keyPressed = _getch()) != 'Q') {
        if (keyPressed >= 'Z' && keyPressed <= 'M') {
            piano.pressKey(keyPressed);
        }
    }

    return 0;
}