///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1 - EE 205 - Spr 2022
///
/// @file reportCats.cpp
/// @version 1.0
///
/// @author Creel Patrocinio <creel@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "reportCats.h"
#include "config.h"

void printCat(const size_t index) {
    if (validIndex(index) == true) {
        printf("cat index = [%lu] name=[%s] gender = [%s] breed = [%s] isFixed = [%d] weight = [%.3f] collarColor1 = [%s] collarColor2 = [%s] license[%llu]\n",
               index,
               cats[index].name,
               genderLiteral(cats[index].gender),
               breedLiteral(cats[index].breed),
               cats[index].isFixed,
               cats[index].weight,
               colorLiteral(cats[index].collarColor1),
               colorLiteral(cats[index].collarColor2),
               cats[index].license);

    }



}

void printAllCats() {
    for (size_t index = 0; index < numberOfCats; ++index) {
        printCat(index);

    }
}


int findCat(const char *name) {
    for (size_t i = 0; i < numberOfCats; ++i) {
        if (strcmp(name, catName[i]) == 0) {
            return i;

        }

    }
    printf("Error: Cat not in the database %s\n", index);
    return -1;

}

