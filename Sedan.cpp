//
// Created by Roey on 07/12/2025.
//

#include "Sedan.h"

Sedan::Sedan() {

}

Sedan::~Sedan() {

}

Sedan::Sedan(const string& model, const string& color, const string& gearType, int noOfGears, int noOfSeats, int noOfDoors, const string& fuelType,
    int milesDriven, const string& engineType, const string& size, const string& bodyType, const string& trunkType)
        :Car(model,color,gearType,noOfGears,noOfSeats,noOfDoors,fuelType,milesDriven,engineType),_size(size),_bodyType(bodyType),
_trunkType(trunkType)
{

}

void Sedan::CarDetails()override
{
    cout<<"Sedan Car Details:"<<endl<<"Model: "<<getmodel()<<endl<<"Color: "<<getcolor()<<endl<<"Gear type"<<getgearType()<<endl<<"Number of Gears: "<<
        getnoOfGears()<<endl<<"Number of seats: "<<getnoOfSeats()<<endl<<endl<<"Number of doors: "<<getnoOfDoors()<<endl<<"Fuel Type"<<getfuelType()
    <<endl<<"Miles Driven: "<<getmilesDriven()<<endl<<"Engine"<<getengineType()<<endl<<"Size of Car: "<<getsize()<<endl<<"Body type: "<<getbodyType()
    <<endl<<"trunk type: "<<gettrunkType();
}


