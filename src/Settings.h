#pragma once
#include <string>

class Settings
{
public:
    int replaySeconds = 15;
    int hotkey = 0x77;

    void Load();
};
