///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1 - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 1.0
///
/// @author Creel Patrocinio <creel@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include "catDatabase.h"
#include "config.h"
#include "Cat.h"
#include <stdexcept>

Cat* catDatabaseHeadPointer = nullptr;
int numberOfCats = 0;

void initializeCatDatabase() {
    if(catDatabaseHeadPointer != nullptr) {
        throw std::logic_error(PROGRAM_NAME ":Previous database not empty.");
    }
}


extern bool isCatInDatabase(const Cat* aCat) {
    Cat* iCat = catDatabaseHeadPointer;
    while(iCat != nullptr) {
       if(aCat == iCat) {
           return true;
            }
       iCat = iCat->next;
       }
       return false;
}


extern bool validateDatabase() {
    Cat* iCat = catDatabaseHeadPointer;
    while(iCat != nullptr) {
        if (!iCat->validate()) {
            return false;
        }
        iCat = iCat->next;
        }
        return true;
}


