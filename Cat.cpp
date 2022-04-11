///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1 - EE 205 - Spr 2022
///
/// @file Cat.cpp
/// @version 1.0
///
/// @author Creel Patrocinio <creel@hawaii.edu>
/// @date   10_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include <cstring>
#include <stdexcept>
#include <iostream>
#include <iomanip>
#include <cassert>
#include "catDatabase.h"
#include "Cat.h"
#include "reportCats.h"

#define FORMAT_LINE( className, member ) cout << setw(8) << (className) << setw(20) << (member) << setw(52)
using namespace std ;

void Cat::zeroOutMemberData() {
    memset(name, 0, MAX_CAT_NAME);
    gender = UNKNOWN_GENDER;
    breed = UNKNOWN_BREED;
    isCatFixed = false;
    weight = UNKNOWN_WEIGHT;
    next = nullptr;
}

Cat::Cat() {
    zeroOutMemberData();
}

Cat::Cat(const char* newName,
         const Gender newGender,
         const Breed newBreed,
         const Weight newWeight) {

    setName(newName);
    gender = newGender;
    breed = newBreed;
    isCatFixed = false;
    weight = newWeight;
}

Cat::~Cat() {
    zeroOutMemberData() ;
}

const char *Cat::getName() const noexcept {
    return name;
}

void Cat::setName(const char *newName) {
    if(validateName(newName)) {
        memset(name, 0, MAX_CAT_NAME);
        strcpy(name, newName);
    }
}

Gender Cat::getGender() const noexcept {
    return gender;
}

Breed Cat::getBreed() const noexcept {
    return breed;
}

bool Cat::isFixed() const noexcept {
    return isCatFixed;
}

Weight Cat::getWeight() const noexcept {
    return weight;
}

#define FORMAT_LINE(className, member) cout << setw(8) << (className) << setw(20) << (member) << setw(52)

bool Cat::print() const noexcept {
    using namespace std;

    assert( validate() ) ;
    cout << setw(80) << setfill( '=' ) << "" << endl ;
    cout << setfill( ' ' ) ;
    cout << left ;
    cout << boolalpha ;
    FORMAT_LINE( "Cat", "name" ) << getName() << endl ;
    FORMAT_LINE( "Cat", "gender" ) << genderName( getGender() ) << endl ;
    FORMAT_LINE( "Cat", "breed" ) << breedName( getBreed() ) << endl ;
    FORMAT_LINE( "Cat", "isFixed" ) << isFixed() << endl ;
    FORMAT_LINE( "Cat", "weight" ) << getWeight() << endl ;
    return true ;
}

bool Cat::validate() const noexcept {
    if(validateBreed(Cat::breed) && validateName(Cat::name) && validateWeight(Cat::weight) &&
       validateGender(Cat::gender)) {
        return true;
    }
    return false;
}

bool Cat::validateName(const char *newName) {
    if(newName != nullptr && strlen(newName)>0 && strlen(newName) < MAX_CAT_NAME) {
        return true;
    }
    if(newName == nullptr || strlen(newName) == 0) {
        throw std::invalid_argument("Name must not be null");
    }
    if(strlen(newName) >= MAX_CAT_NAME) {
        throw std::length_error("Name must be < MAX_CAT_NAME");
    }
    return false;
}

bool Cat::validateGender(const Gender newGender) {
    if(newGender!=UNKNOWN_GENDER) {
        return true;
    }
    return false;
}

bool Cat::validateBreed(const Breed newBreed) {
    if(newBreed!=UNKNOWN_BREED) {
        return true;
    }
    else{
        throw std::invalid_argument("newBreed is UNKNOWN_BREED.");
    }
}

bool Cat::validateWeight(const Weight newWeight) {
    if(newWeight <= 0) {
        throw std::invalid_argument("newWeight <= 0.");
    }
    return true;
}

void Cat::fixCat() noexcept {
    Cat::isCatFixed = true;
}

void Cat::setWeight(Weight newWeight) {
    if(validateWeight(newWeight)) {
        weight = newWeight;
    }
}

void Cat::setGender(Gender newGender) {
    if(gender == UNKNOWN_GENDER){
        gender = newGender;
    }
    else {
        throw std::logic_error("Logic error. Can't change gender");
    }
}

void Cat::setBreed(Breed newBreed) {
    if (breed == UNKNOWN_BREED) {
        breed = newBreed;
    }
    else {
        throw std::logic_error( PROGRAM_NAME ": The breed is already set, you can't change it" );
    }
}