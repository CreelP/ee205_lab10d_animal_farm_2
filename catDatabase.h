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
#define MAX_CAT_NAME 30
#define MAX_CAT 1024
#define MAX_CAT_WEIGHT 1000


extern size_t numberOfCats;


// Gender
enum Gender {

    UNKNOWN_GENDER,
    MALE,
    FEMALE

};


// Breed
enum Breed {

    UNKNOWN_BREED,
    MAINE_COON,
    MANX,
    SHORTHAIR,
    PERSIAN,
    SPHYNX

};
enum Color {
    UNASSIGNED,
    BLACK,
    WHITE,
    RED,
    BLUE,
    GREEN,
    PINK

};

struct Cat {
    char name[MAX_CAT_NAME];
    enum Gender gender;
    enum Breed breed;
    float weight;
    bool isFixed;
    enum Color collarColor1;
    enum Color collarColor2;
    unsigned long long license;


};

extern struct Cat cats[];
void initializeCatDatabase();
char *genderLiteral(const enum Gender gender);
char *breedLiteral(const enum Breed breed);
char *colorLiteral(const enum Color color);


#endif //EE205_LAB_08D_ANIMAL_FARM_1_CATDATABASE_H
