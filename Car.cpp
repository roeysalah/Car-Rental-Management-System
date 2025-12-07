//
// Created by Roey on 07/12/2025.
//

#include "Car.h"

Car::~Car() {

}

Car::Car(const string& model, const string& color, const string& gearType, int noOfGears, int noOfSeats, int noOfDoors, const string& fuelType, int milesDriven, const string& engineType)
    :_model(model),_color(color),_gearType(gearType),_noOfGears(noOfGears),_noOfSeats(noOfSeats),_noOfDoors(noOfDoors),_fuelType(fuelType),
_milesDriven(milesDriven),_engineType(engineType)
{

}

