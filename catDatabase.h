///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1 - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author Creel Patrocinio <creel@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE205_LAB_08D_ANIMAL_FARM_1_CATDATABASE_H
#define EE205_LAB_08D_ANIMAL_FARM_1_CATDATABASE_H
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include "config.h"
#include "Cat.h"
#define MAX_CAT_NAME 30
#define MAX_CAT 1024
#define MAX_CAT_WEIGHT 1000


extern int numberOfCats;
extern void initializeCatDatabase();
extern bool isCatInDatabase(const Cat* aCat);
extern bool validateDatabase();

extern Cat* catDatabaseHeadPointer ;

#endif //EE205_LAB_08D_ANIMAL_FARM_1_CATDATABASE_H
