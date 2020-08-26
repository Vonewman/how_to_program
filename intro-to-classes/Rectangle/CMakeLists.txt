cmake_minimum_required(VERSION 3.13.4)
project(directory_test)

#Bring the headers, such as Rectangle.h into the project
include_directories(include)

#Can manually add the sources using the set command as follows:
#set(SOURCES src/main.cpp src/Rectangle.cpp)

#However, the file(GLOB..) alows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")

add_executable(rect ${SOURCES})
