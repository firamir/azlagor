cmake_minimum_required(VERSION 3.29)
project(azlagor)

set(CMAKE_CXX_STANDARD 23)

add_library(azlagor SHARED
        src/utils/vmt/vmt.h
        src/utils/vmt/vmt.cpp
        src/app/app.hpp
        src/app/app.cpp
        src/utils/logger/logger.hpp
        src/utils/singleton/singleton.hpp
        src/sdk/sdk.hpp
)
target_sources(azlagor PRIVATE src/main.cpp)
target_include_directories(azlagor PUBLIC src)