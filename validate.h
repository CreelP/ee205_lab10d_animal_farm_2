///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1 - EE 205 - Spr 2022
///
/// @file validate.h
/// @version 1.0
///
/// @author Creel Patrocinio <creel@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE205_LAB_08D_ANIMAL_FARM_1_VALIDATE_H
#define EE205_LAB_08D_ANIMAL_FARM_1_VALIDATE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "catDatabase.h"


bool validName(const char *name);
bool validWeight(const float weight);
bool validIndex(const size_t index);
bool validcollarColor(const enum Color collar1,
                      Color collar2);

bool validLicense(const unsigned long long licenseNum);



#endif //EE205_LAB_08D_ANIMAL_FARM_1_VALIDATE_H
