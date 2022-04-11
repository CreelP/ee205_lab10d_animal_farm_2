///////////////////////////////////////////////////////////////////////////////
///  University of Hawaii, College of Engineering
///  @brief Lab 05b - Animalfarm0 - EE 205 - Spr 2022
///
/// @file main.c
/// @version 1.0
///
/// @author Creel Patrocinio <creel@hawaii.edu>
/// @date 02/20/2022
///////////////////////////////////////////////////////////////////////////////

#include <cassert>
#include <cstring>
#include <iostream>
#include <exception>
#include <cstdlib>

#include "catDatabase.h"
#include "addCats.h"
#include "reportCats.h"
#include "deleteCats.h"
#include "config.h"
#include "Cat.h"
#define MAX_NAME1 "1234567890123456789012345678901234567890123456789"
#define ILLEGAL_NAME "12345678901234567890123456789012345678901234567890"

using namespace std;

int main() {
    cout << "Starting " << PROGRAM_TITLE << endl;

    initializeCatDatabase();

    bool result ;
    result = addCat( new Cat("Loki", MALE, PERSIAN, 1.0));
    assert(result);
    if(!result) throw logic_error (PROGRAM_NAME ": addCat() failed");
    result = addCat(new Cat( "Milo", MALE, MANX , 1.1));
    assert(result);
    result = addCat(new Cat("Bella", FEMALE, MAINE_COON, 1.2));
    assert(result);
    result = addCat(new Cat( "Kali", FEMALE, SHORTHAIR, 1.3));
    assert(result);
    result = addCat(new Cat( "Trin", FEMALE, MANX, 1.4));
    assert(result);
    result = addCat(new Cat( "Chili", MALE, SHORTHAIR, 1.5));
    assert(result);

    printAllCats();
    deleteAllCats();
    printAllCats();

    cout << "Done with " << PROGRAM_TITLE ;
    return( EXIT_SUCCESS ) ;

}