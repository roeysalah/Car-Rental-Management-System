//
// Created by Roey on 07/12/2025.
//

#include "Coupe.h"
Coupe::Coupe()
    :{

}

Coupe::Coupe(const string& model, const string& color, const string& gearType, int noOfGears, int noOfSeats, int noOfDoors, const string& fuelType,
    int milesDriven, const string& engineType,const string& roofSystem)
        :Car(model,color,gearType,noOfGears,noOfSeats,noOfDoors,fuelType,milesDriven
            ,engineType),_roofSystem(roofSystem) {

}

Coupe::~Coupe() {

}

void Coupe::CarDetails()override {
    cout<<"Convertible Car Details:"<<endl<<"Model: "<<getmodel()<<endl<<"Color: "<<getcolor()<<endl<<"Gear type"<<getgearType()<<endl<<"Number of Gears: "<<
        getnoOfGears()<<endl<<"Number of seats: "<<getnoOfSeats()<<endl<<endl<<"Number of doors: "<<getnoOfDoors()<<endl<<"Fuel Type"<<getfuelType()
    <<endl<<"Miles Driven: "<<getmilesDriven()<<endl<<"Engine"<<getengineType()<<endl<<"Roof system: "<<getroofSystem()<<endl;
}

