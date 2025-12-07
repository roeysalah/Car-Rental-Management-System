//
// Created by Roey on 07/12/2025.
//

#ifndef MINIVANS_H
#define MINIVANS_H
#include "Car.h"


class Minivans :public Car{
protected:
    string _doorOpen;
public:
    Minivans();
    Minivans(const string& model,const string& color,const string& gearType,int noOfGears,int noOfSeats,int noOfDoors,const string& fuelType,int milesDriven,
        const string& engineType,const string& doorOpen);
    virtual ~Minivans();
    //Getters
    string getdoorOpen()const{return _doorOpen;}
    //Setters
    void setdoorOpen(const string& doorOpen){_doorOpen = doorOpen;}

    void CarDetails() override;

};



#endif //MINIVANS_H
