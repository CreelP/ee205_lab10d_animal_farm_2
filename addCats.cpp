///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1 - EE 205 - Spr 2022
///
/// @file addCats.cpp
/// @version 1.0
///
/// @author Creel Patrocinio <creel@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "addCats.h"
#include "config.h"
#include "catDatabase.h"
#include <iostream>
#include "Cat.h"

extern bool addCat(Cat* newCat) {
    if(newCat != nullptr && isCatInDatabase(newCat)==false){
        newCat->next = catDatabaseHeadPointer;
        catDatabaseHeadPointer = newCat;
        numberOfCats++;
        return true;
    }
    throw std::logic_error("Cat is already in database.");
}