project(CallbackPerformance)
cmake_minimum_required(VERSION 3.17)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_CXX_FLAGS_RELEASE "-O3" CACHE STRING "")

find_package(Boost COMPONENTS signals signals2)

find_package(Qt5 COMPONENTS Core REQUIRED)

add_definitions(-std=c++17)


add_executable(
    ${PROJECT_NAME}
    func.cpp
    func.hpp
    main.cpp
)

target_link_libraries(
    ${PROJECT_NAME}
    ${Boost_SIGNALS_LIBRARY}
    ${Boost_SIGNALS2_LIBRARY}
    Qt5::Core
)

message("build type: ${CMAKE_BUILD_TYPE}")
