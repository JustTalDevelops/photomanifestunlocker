cmake_minimum_required(VERSION 3.0)
project(photomanifestunlocker)

set(CMAKE_PREFIX_PATH ../../sdk)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_BUILD_TYPE Debug)

include_directories(include minecraft-headers)

find_package(ModLoader REQUIRED)

add_library(photomanifestunlocker SHARED src/main.cpp)
target_link_libraries(photomanifestunlocker PUBLIC ModLoader)