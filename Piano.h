// Piano.h - ������������ ���� ��� ������ Piano,
//  ������� ��������� ����� ��������� �
//  ���������������� ������.

#ifndef PIANO_H
#define PIANO_H
#include "PianoKey.h"

class Piano {
public:
    Piano();
    void pressKey(char keyChar);
    void releaseAllKeys();
    void display();

private:
    PianoKey keys[7]; // ��� ����� ������
};

#endif
