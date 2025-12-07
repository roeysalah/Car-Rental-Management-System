//
// Created by Roey on 07/12/2025.
//

#ifndef SEDAN_H
#define SEDAN_H

#include "Car.h"

class Sedan :public Car{
protected:
    string _size;
    string _bodyType;
    string _trunkType;
public:
    Sedan();
    Sedan(const string& model,const string& color,const string& gearType,int noOfGears,int noOfSeats,int noOfDoors,const string& fuelType,int milesDriven,const string& engineType,
        const string& size,const string& bodyType,const string& trunkType);
    ~Sedan();
    //Getters
    string getsize()const{return _size;}
    string getbodyType()const{return _bodyType;}
    string gettrunkType()const{return _trunkType;}
    //Setters
    void setsize(const string& size){_size = size;}
    void setbodyType(const string& bodyType){_bodyType= bodyType;}
    void settrunkType(const string& trunkType){ _trunkType = trunkType;}

    void CarDetails() override;



};



#endif //SEDAN_H
