//
// Created by Roey on 07/12/2025.
//

#include "Minivans.h"

Minivans::Minivans() {

}
Minivans::~Minivans() {

}

Minivans::Minivans(const string& model, const string& color, const string& gearType, int noOfGears, int noOfSeats, int noOfDoors, const string& fuelType, int milesDriven, const string& engineType, const string& doorOpen)
:Car(model,color,gearType,noOfGears,noOfSeats,noOfDoors,fuelType,milesDriven
        ,engineType),_doorOpen(doorOpen)
{

}


void Minivans::CarDetails()override {
    cout<<"Convertible Car Details:"<<endl<<"Model: "<<getmodel()<<endl<<"Color: "<<getcolor()<<endl<<"Gear type"<<getgearType()<<endl<<"Number of Gears: "<<
        getnoOfGears()<<endl<<"Number of seats: "<<getnoOfSeats()<<endl<<endl<<"Number of doors: "<<getnoOfDoors()<<endl<<"Fuel Type"<<getfuelType()
    <<endl<<"Miles Driven: "<<getmilesDriven()<<endl<<"Engine"<<getengineType()<<endl<<"Door open"<<getdoorOpen()<<endl;
}



