cmake_minimum_required(VERSION 3.13.4)
project(directory_test)
 
#Bring the headers, such as Peluche.h into the project
include_directories(include)
 
#Can manually add the sources using the set command as follows:
#set(SOURCES src/main.cpp src/Peluche.cpp)
 
#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")
 
add_executable(peluche ${SOURCES})
