cmake_minimum_required(VERSION 3.13.4)
project(commission_employee)

include_directories(include)

file(GLOB SOURCES "src/*cpp")

add_executable(commision ${SOURCES})
