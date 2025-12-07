//
// Created by Roey on 07/12/2025.
//

#ifndef DRIVER_H
#define DRIVER_H

#include "Employee.h"

class Driver :public Employee{
private:
    double _rating;
    static int no_drivers;
public:
    Driver(const string& name,int id,int age,long int contact,double rating);
    ~Driver();
    double view_rating()const{return _rating;}
    static int view_no_drivers(){return no_drivers;}

};



#endif //DRIVER_H
