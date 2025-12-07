//
// Created by Roey on 07/12/2025.
//

#ifndef CAR_H
#define CAR_H
using namespace std;
#include <string>
#include <iostream>

class Car {
private:
    string _model;
    string _color;
    string _gearType;
    int _noOfGears;
    int _noOfSeats;
    int _noOfDoors;
    string _fuelType;
    int _milesDriven;
    string _engineType;
public:
    Car(const string& model,const string& color,const string& gearType,int noOfGears,int noOfSeats,int noOfDoors,const string& fuelType,int milesDriven,const string& engineType);
    virtual ~Car();
    //Getters
    string getmodel()const{return _model;}
    string getcolor()const{return _color;}
    string getgearType()const{return _gearType;}
    int getnoOfGears()const{return _noOfGears;}
    int getnoOfSeats()const{return _noOfSeats;}
    int getnoOfDoors()const{return _noOfDoors;}
    string getfuelType()const{return _fuelType;}
    int getmilesDriven()const{return _milesDriven;}
    string getengineType()const{return _engineType;}
    //Setters
    void setgetmodel(const string& model){_model = model;}
    void setgetcolor(const string& color){_color = color;}
    void setgearType(const string& gearType){_gearType = gearType;}
    void setnoOfGears(int noOfGears){_noOfGears = noOfGears;}
    void setnoOfSeats(int noOfSeats){_noOfSeats = noOfSeats;}
    void setnoOfDoors(int noOfDoors){_noOfDoors = noOfDoors;}
    void setfuelType(const string& fuelType){_fuelType = fuelType;}
    void setmilesDriven(int milesDriven){_milesDriven=milesDriven;}
    void setengineType(const string& engineType){_engineType = engineType;}

    virtual void CarDetails() = 0;
};



#endif //CAR_H
