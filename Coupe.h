//
// Created by Roey on 07/12/2025.
//

#ifndef COUPE_H
#define COUPE_H

#include "Car.h"

class Coupe : public Car{
protected:
    string _roofSystem;
public:
    virtual ~Coupe();
    Coupe();
    Coupe(const string& model,const string& color,const string& gearType,int noOfGears,int noOfSeats,int noOfDoors,const string& fuelType,int milesDriven,
        const string& engineType,const string& roofSystem);
    //Getters
    string getroofSystem()const{return _roofSystem;}
    //Setters
    void setroofSystem(const string& roofSystem){_roofSystem = roofSystem;}

    void CarDetails() override;


};



#endif //COUPE_H
