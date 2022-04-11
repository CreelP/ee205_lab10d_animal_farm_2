///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1 - EE 205 - Spr 2022
///
/// @file reportCats.cpp
/// @version 1.0
///
/// @author Creel Patrocinio <creel@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include <stdexcept>
#include <iostream>
#include "reportCats.h"
#include "config.h"
#include "catDatabase.h"
#include "Cat.h"

bool printAllCats() {
    Cat* iCat = catDatabaseHeadPointer;
    while(iCat != nullptr) {
        iCat->print();
        iCat = iCat->next;
    }
    return true;
}

Cat* findCatByName(const char* name) {
    Cat* iCat = catDatabaseHeadPointer;
    while(iCat != nullptr) {
        if (strcmp(name,iCat->getName())==0){
            return iCat;
        }
        iCat = iCat->next;
    }
    return nullptr;
}

const char* genderName(const enum Gender gender) {
    switch(gender) {
        case UNKNOWN_GENDER: return "Unknown Gender";
        case MALE: return "Male";
        case FEMALE: return "Female";
    }
    return nullptr;
}

const char* breedName(const enum Breed breed) {
    switch(breed) {
        case UNKNOWN_BREED: return "Unknown Breed";
        case MAINE_COON: return "Maine Coon";
        case MANX: return "Manx";
        case SHORTHAIR: return "Shorthair";
        case PERSIAN: return "Persian";
        case SPHYNX: return "Sphynx";
    }
    return nullptr;
}
