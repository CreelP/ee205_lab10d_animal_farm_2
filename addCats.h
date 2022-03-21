///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1 - EE 205 - Spr 2022
///
/// @file addCats.h
/// @version 1.0
///
/// @author Creel Patrocinio <creel@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE205_LAB_08D_ANIMAL_FARM_1_ADDCATS_H
#define EE205_LAB_08D_ANIMAL_FARM_1_ADDCATS_H

#include "catDatabase.h"
#include "validate.h"

int addCat(const char *name,
           const enum Gender gender,
           const enum Breed breed,
           const bool isFixed,
           const float weight
           const enum Color collarColor1,
           const enum Color collarColor2,
           const unsigned long long license);




#endif //EE205_LAB_08D_ANIMAL_FARM_1_ADDCATS_H
