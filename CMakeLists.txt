cmake_minimum_required(VERSION 3.22)
project(ee205_lab_08d_animal_farm_1)

set(CMAKE_CXX_STANDARD 14)

add_executable(ee205_lab_08d_animal_farm_1 main.cpp addCats.cpp addCats.h config.h catDatabase.cpp catDatabase.h deleteCats.cpp deleteCats.h reportCats.cpp reportCats.h Cat.h Cat.cpp)
