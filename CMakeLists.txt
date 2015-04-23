cmake_minimum_required(VERSION 3.1)
project(MonolithOS)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -std=c++11")

set(SOURCE_FILES core.cpp)
add_executable(MonolithOS ${SOURCE_FILES} core.h modules/diagnostic.h depends.h modules/ai/ai_manager.h modules/ai/ai_vision.h modules/components/sonars.h modules/components/camera.h modules/components/wheels.h modules/components/wifi.h modules/components/gps.h modules/components/components_manager.h modules/ai/ai_tasker.h)