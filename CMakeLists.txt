cmake_minimum_required(VERSION 3.24)
project(ReseauOrdinateur)

set(CMAKE_CXX_STANDARD 17)

add_executable(ReseauOrdinateur main.cpp src/Equipement.cpp src/APN.cpp src/N_interface.cpp src/Ordinateur.cpp)
