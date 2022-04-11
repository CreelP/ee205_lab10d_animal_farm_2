///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1 - EE 205 - Spr 2022
///
/// @file Cat.h
/// @version 1.0
///
/// @author Creel Patrocinio <creel@hawaii.edu>
/// @date   10_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "config.h"
#define MAX_CAT_NAME 30

// Cat class spec:
// Protected members: char array of MAX_CAT_NAME,
// enum Gender,
// enum Breed,
// bool isCatFixed,
// weight
// Public member: next - pointer to cat object
// Cat() constructor - no param
// Second constructor with all fields for valid cat


class Cat {
protected:
    char name[MAX_NAME_LENGTH];
    enum Gender gender;
    enum Breed breed;
    bool isCatFixed;
    Weight weight;

public:
    Cat *next;


}