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



int addCats(const char *name,
            const enum Gender gender,
            const enum Breed breed,
            const bool isFixed,
            const float weight
            const enum Color collarColor1,
            const enum Color collarColor2,
            const unsigned long long license) {



    if (numberOfCats > MAX_CAT) {
        fprintf(stderr, "%s Database is full\n", PROGRAM_NAME, name);
        return BAD_CAT;

    }

    if (!validName(name)) {
        fprintf(stderr, "%s Given name is not a valid input\n", PROGRAM_NAME, name);
        return BAD_CAT;
    }

    if (!validWeight(weight)) {
        fprintf(stderr, "%s Invalid weight\n", PROGRAM_NAME, name);

    }

    if (!validcollarColor(collarColor1, collarColor2)) {
        fprintf(stderr, "%s addCat input invalid\n", PROGRAM_NAME);
        return BAD_CAT;
    }
    if (!validLicense(license)) {
        fprintf(stderr, "%s addCat input invalid\n", PROGRAM_NAME);
        return BAD_CAT;
    }

    size_t newCatIndex = numberofCats;
    numberOfCats++;

    strcpy(cats[newCatIndex].name, name);
    cats[newCatIndex].gender = gender;
    cats[newCatIndex].breed = breed;
    cats[newCatIndex].isFixed = isFixed;
    cats[newCatIndex].weight = weight;
    cats[newCatIndex].collarColor1 = collarColor1;
    cats[newCatIndex].collarColor2 = collarColor2;
    cats[newCatIndex].license = license;
    return newCatIndex;



}
