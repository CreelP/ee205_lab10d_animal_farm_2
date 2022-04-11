///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1 - EE 205 - Spr 2022
///
/// @file deleteCats.cpp
/// @version 1.0
///
/// @author Creel Patrocinio <creel@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include <stdexcept>

#include "deleteCats.h"
#include "config.h"
#include "catDatabase.h"

bool deleteAllCats() {
    while(catDatabaseHeadPointer != nullptr) {
        deleteCat(catDatabaseHeadPointer);
    }
    return true;
}

bool deleteCat(Cat* deleteThisCat) {
    Cat* iCat = catDatabaseHeadPointer;
    if(deleteThisCat == catDatabaseHeadPointer) {
        catDatabaseHeadPointer = catDatabaseHeadPointer->next;
        numberOfCats = numberOfCats - 1;
        return true;
    }
    while(iCat->next != nullptr) {
        if(deleteThisCat == iCat->next) {
            iCat->next = deleteThisCat->next;
            numberOfCats = numberOfCats -1;
            return true;
        }
        iCat = iCat->next;
    }
    throw std::invalid_argument(PROGRAM_NAME ": Unable to delete cat-  Cat not in database");
}