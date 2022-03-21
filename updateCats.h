///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1 - EE 205 - Spr 2022
///
/// @file updateCats.h
/// @version 1.0
///
/// @author Creel Patrocinio <creel@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE205_LAB_08D_ANIMAL_FARM_1_UPDATECATS_H
#define EE205_LAB_08D_ANIMAL_FARM_1_UPDATECATS_H

#include "catDatabase.h"
#include "addCats.h"
#include <string.h>


bool updateCatName(const size_t index, const char *newName);
bool fixCat(const size_t index);
bool updateCatWeight(const size_t index, const float weight);
bool updateCollar1(const size_t index, const enum Color newColor);
bool updateCollar2(const size_t index, const enum Color newColor);
bool updateLicense(const size_t index, const unsigned long long int newLicense);



#endif //EE205_LAB_08D_ANIMAL_FARM_1_UPDATECATS_H
