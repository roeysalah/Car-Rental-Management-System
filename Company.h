//
// Created by Roey on 07/12/2025.
//

#ifndef COMPANY_H
#define COMPANY_H
#include "Car.h"
#include "Admin.h"

class Company {
private:
    static double _tax;
    static double _revenue;
public:
    Company();
    ~Company();
    double getTax()const{return _tax;}
    double getRevenue()const{return _revenue;}
    void TaxAmountRenew(double tax){
        _tax += tax;
    }
    void RevenueAmountRenew(double revenue){
        _revenue += revenue;
    }
    friend class Car;
    friend class Admin;

};



#endif //COMPANY_H
