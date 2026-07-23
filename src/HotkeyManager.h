#pragma once

class HotkeyManager
{
public:
    void Register(int key);
    bool Pressed();

private:
    int hotkey = 0x77; // F8
};
