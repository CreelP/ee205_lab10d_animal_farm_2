///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1 - EE 205 - Spr 2022
///
/// @file reportCats.h
/// @version 1.0
///
/// @author Creel Patrocinio <creel@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "catDatabase.h"
#include "config.h"
#include "Cat.h"

extern bool printAllCats();
extern Cat* findCatByName(const char* name);
extern const char* breedName(enum Breed breed);
extern const char* genderName(enum Gender gender);



