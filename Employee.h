//
// Created by Roey on 07/12/2025.
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using namespace std;
#include <string>
#include <iostream>

class Employee {
protected:
    string _name;
    int _id;
    int _age;
    long int _contact;
    int _salary;
public:
    Employee(const string& name="XXXX",int id=0,int age = 0,long int contact = 0);
    ~Employee();
    void DisplayDetails();

};



#endif //EMPLOYEE_H
