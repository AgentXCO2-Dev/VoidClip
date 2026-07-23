#include <windows.h>
#include <iostream>
#include "HotkeyManager.h"
#include "ReplayBuffer.h"
#include "Settings.h"

int main()
{
    Settings settings;
    settings.Load();

    ReplayBuffer replay(settings.replaySeconds);
    HotkeyManager hotkey;

    hotkey.Register(settings.hotkey);

    std::cout << "VoidClip started" << std::endl;
    std::cout << "Press F8 to save replay" << std::endl;

    while (true)
    {
        if (hotkey.Pressed())
        {
            replay.SaveClip();
        }

        Sleep(50);
    }

    return 0;
}
