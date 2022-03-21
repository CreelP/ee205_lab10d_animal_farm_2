///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1 - EE 205 - Spr 2022
///
/// @file validate.cpp
/// @version 1.0
///
/// @author Creel Patrocinio <creel@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "validate.h"
#include "config.h"


bool validName(const char *name) {
    for(size_t i = 0; i < numberOfCats; ++i) {
        if (strcmp(cats[i].name, name) == 0) {
            fprintf(stderr, "%s Error: There already exists a cat in the database with the name %s!\n", PROGRAM_NAME, name);
            return false;

        }

    }
    if (name == NULL) {
        fprintf(stderr, "%s Error: NULL name is invalid %s!\n", PROGRAM_NAME, name);
        return false;

    }
    if (strlen(name) >= MAX_CAT_NAME) {
        return false;

    }

    return true;

}

bool validWeight(const float weight) {
    if (weight > 0 && weight < MAX_CAT_WEIGHT) {
        return true;

    }
    fprintf(stderr, "%s Error: An invalid weight assignment has been attempted!\n", PROGRAM_NAME);
    return false;

}


bool validIndex(const size_t index) {
    if (index >= numberOfCats) {
        fprintf(stderr, "%s Error: Access to an out-of-range index has been attempted!\n", PROGRAM_NAME);
        return false;

    }
    return true;
}


bool validCollarColor(const enum Color testcollar1,
                      Color testcollar2); {
        if (testCollar1 == testCollar2) {
            fprintf(stderr, "%s Error: Collar colors for a given cat must be different colors!\n", PROGRAM_NAME);
        return false;

        }
for (size_t i = 0; i < numberOfCats; ++i) {
enum Color compareCollar1 = cats[i].collarColor1;
enum Color compareCollar2 = cats[i].collarColor2;

if ((testCollar1 == compareCollar1 && testCollar2 == compareCollar2) ||
(testCollar1 == compareCollar2 && testCollar2 == compareCollar1)) {
fprintf(stderr, "%s Error: The Collar Color combination of %s and %s is not unique!\n", PROGRAM_NAME, colorLiteral(testCollar1), colorLiteral(testCollar2));
return false;

}


}
return true;


}

bool validLicense(const unsigned long long licenseNum) {
    for (size_t i = 0; i < numberOfCats; ++i) {
        if (cats[i].license == licenseNum) {
            fprintf(stderr, "%s Error: License is not unique!\n", PROGRAM_NAME);
            return false;

        }

    }
    return true;
}



