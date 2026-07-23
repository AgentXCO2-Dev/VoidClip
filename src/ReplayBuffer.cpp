#include "ReplayBuffer.h"
#include <iostream>
#include <chrono>
#include <iomanip>
#include <sstream>

ReplayBuffer::ReplayBuffer(int seconds)
    : replaySeconds(seconds)
{
}

void ReplayBuffer::SaveClip()
{
    auto now = std::chrono::system_clock::now();
    auto time = std::chrono::system_clock::to_time_t(now);

    std::stringstream name;
    name << "ReplayClip_" << std::put_time(std::localtime(&time), "%Y-%m-%d_%H-%M-%S") << ".mp4";

    std::cout << "Saving " << replaySeconds << " second clip: " << name.str() << std::endl;
}
