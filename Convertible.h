//
// Created by Roey on 07/12/2025.
//

#ifndef CONVERTIBLE_H
#define CONVERTIBLE_H

#include "Car.h"
class Convertible : public Car
{
protected:
    string _roofMechanic;
    string _roofType;
    string _bodyType;
public:
    Convertible();
    Convertible(const string& model,const string& color,const string& gearType,int noOfGears,int noOfSeats,int noOfDoors,const string& fuelType,int milesDriven,const string& engineType,
        const string& roofMechanic,const string& roofType,const string& bodyType);
    virtual ~Convertible();
    //Getters
    string getroofMechanic()const{return _roofMechanic;}
    string getroofType(){return _roofType;}
    string getbodyType(){return _bodyType;}

    //Setters
    void setroofMechanic(const string& roofMechanic){_roofMechanic = roofMechanic;}
    void setbodyType(const string& roofType){bodyType = roofType;}
    void setroofType(const string& bodyType){roofType =bodyType;}

    void CarDetails()override;

};


#endif //CONVERTIBLE_H
