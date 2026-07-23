#pragma once

class ReplayBuffer
{
public:
    explicit ReplayBuffer(int seconds);
    void SaveClip();

private:
    int replaySeconds;
};
