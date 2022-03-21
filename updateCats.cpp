///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1 - EE 205 - Spr 2022
///
/// @file updateCats.cpp
/// @version 1.0
///
/// @author Creel Patrocinio <creel@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "updateCats.h"
#include <string.h>
#include "config.h"


bool updateCatName(const size_t index, const char *newName) {
    if (validName(newName)) {
        strcpy(cats[index].name, newName);
        return true;
    }
    return false;

}

bool fixCat(const size_t index) {
    cats[index].isFixed = true;
    return true;

}

bool updateCatWeight(const size_t index, const float newWeight) {
    if (validWeight(newWeight)) {
        cats[index].weight = newWeight;
        return true;

    }
    return false;

}

bool updateCollar1(const size_t index, const enum Color newColor) {
    if (!validIndex(index)) {
        fprintf(stderr, "%s Collar1 index is invalid\n", PROGRAM_NAME);
        return false;

    }
    if (!validcollarColor(newColor, cats[index].collarColor2)) {
        fprintf(stderr, "%s Collar color invalid\n", PROGRAM_NAME);
        return false;

    }
    cats[index].collarColor1 = newColor;
    return true;

}


bool updateCollar2(const size_t index, const enum Color newColor) {
    if (!validIndex(index)) {
        fprintf(stderr, "%s Collar2 index is invalid\n", PROGRAM_NAME);
        return false;


    }
    if (!validcollarColor(newColor, cats[index].collarColor1)) {
        fprintf(stderr, "%s Collar color invalid\n", PROGRAM_NAME);
        return false;

    }
    cats[index].collarColor1 = newColor;
    return true;

}


bool updateLicense(const size_t index, const unsigned long long int newLicense) {
    if (!validIndex(index)) {
        fprintf(stderr, "%s Error: updateLicense index is invalid\n", PROGRAM_NAME);
        return false;

    }
    if (!validLicense(newLicense)) {
        fprintf(stderr, "%s License number is invalid", PROGRAM_NAME);
        return false;

    }
    cats[index].license = newLicense;
    return true;

}



