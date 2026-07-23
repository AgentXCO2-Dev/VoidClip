cmake_minimum_required(VERSION 3.20)
project(VoidClip VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(VoidClip
    src/main.cpp
    src/ReplayBuffer.cpp
    src/HotkeyManager.cpp
    src/Settings.cpp
)

target_include_directories(VoidClip PRIVATE src)

if(WIN32)
    target_link_libraries(VoidClip PRIVATE user32 windowsapp)
endif()
