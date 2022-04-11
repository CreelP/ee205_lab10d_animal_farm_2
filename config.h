///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1 - EE 205 - Spr 2022
///
/// @file config.h
/// @version 1.0
///
/// @author Creel Patrocinio <creel@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#define PROGRAM_NAME "animalfarm2"
#define PROGRAM_TITLE "Animal Farm 2"

enum Gender{UNKNOWN_GENDER=0,
            MALE,
            FEMALE};

enum Breed{UNKNOWN_BREED=0,
            MAINE_COON,
            MANX,
            SHORTHAIR,
            PERSIAN,
            SPHYNX};


typedef float Weight;
const Weight UNKNOWN_WEIGHT = -1;