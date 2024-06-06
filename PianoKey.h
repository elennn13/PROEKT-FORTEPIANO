// PianoKey.h - заголовочный файл для класса PianoKey,
//  который представляет отдельную клавишу фортепиано.

#ifndef PIANOKEY_H
#define PIANOKEY_H

class PianoKey {
public:
    PianoKey(char keyChar);
    void pressKey();
    void releaseKey();
    bool isPressed() const;
    char getKeyChar() const;

private:
    char keyChar;
    bool pressed;
};

#endif
