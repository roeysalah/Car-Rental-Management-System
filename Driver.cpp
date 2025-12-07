//
// Created by Roey on 07/12/2025.
//

#include "Driver.h"

int Driver::no_drivers = 0;

Driver::Driver(const string& name, int id, int age, long int contact,double rating)
    :Employee(name,id,age,contact),_rating(rating)
{
    no_drivers++;
    _salary = 10000;
}


Driver::~Driver() {

}

