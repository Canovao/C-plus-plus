cmake_minimum_required(VERSION 3.24)
project(ProjetoBakery)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ProjetoBakery
        Bread.cpp
        Bread.hpp
        Cheese.cpp
        Cheese.hpp
        CottageCheese.cpp
        CottageCheese.hpp
        Cracker.cpp
        Cracker.hpp
        FilledWaffer.cpp
        FilledWaffer.hpp
        Food.cpp
        Food.hpp
        Ham.cpp
        Ham.hpp
        Information.cpp
        Information.hpp
        Main.cpp
        Main.hpp
        Menu.cpp
        Menu.hpp
        MyBooleanClass.cpp
        MyBooleanClass.hpp)
