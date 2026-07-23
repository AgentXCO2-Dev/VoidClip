#include "HotkeyManager.h"
#include <windows.h>

void HotkeyManager::Register(int key)
{
    hotkey = key;
}

bool HotkeyManager::Pressed()
{
    return (GetAsyncKeyState(hotkey) & 0x8000) != 0;
}
