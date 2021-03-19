cmake_minimum_required(VERSION 3.17)
project(project1)

set(CMAKE_CXX_STANDARD 14)

add_executable(project1 main.cpp Phone.cpp Phone.h PhoneList.cpp PhoneList.h controller.cpp controller.h)