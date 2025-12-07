//
// Created by Roey on 07/12/2025.
//

#include "Convertible.h"

Convertible::Convertible() {

}
Convertible::~Convertible() {

}

Convertible::Convertible(const string& model, const string& color, const string& gearType, int noOfGears, int noOfSeats, int noOfDoors, const string& fuelType,
    int milesDriven, const string& engineType, const string& roofMechanic, const string& roofType, const string& bodyType)
        :Car(model,color,gearType,noOfGears,noOfSeats,noOfDoors,fuelType,milesDriven,engineType),_roofMechanic(roofMechanic),
_roofType(roofType),_bodyType(bodyType)
{

}



void Convertible::CarDetails()override {
    cout<<"Convertible Car Details:"<<endl<<"Model: "<<getmodel()<<endl<<"Color: "<<getcolor()<<endl<<"Gear type"<<getgearType()<<endl<<"Number of Gears: "<<
        getnoOfGears()<<endl<<"Number of seats: "<<getnoOfSeats()<<endl<<endl<<"Number of doors: "<<getnoOfDoors()<<endl<<"Fuel Type"<<getfuelType()
    <<endl<<"Miles Driven: "<<getmilesDriven()<<endl<<"Engine"<<getengineType()<<endl<<"Roof Mechanics: "<<getroofMechanic()<<endl<<"Roof types: "<<getroofType()<<endl<<"Body type: "<<getbodyType()<<endl;
}

