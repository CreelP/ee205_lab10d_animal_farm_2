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
#pragma once
#include "catDatabase.h"
#include "Cat.h"

extern bool addCat(Cat* newCat);
extern bool isCatInDatabase(char name[]);


