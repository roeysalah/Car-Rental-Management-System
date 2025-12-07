//
// Created by Roey on 07/12/2025.
//

#include "Employee.h"


Employee::~Employee() {

}

Employee::Employee(const string& name, int id, int age, long int contact)
    :_name(name),_id(id),_age(age),_contact(contact)
{

}


void Employee::DisplayDetails(){
    cout<<"Name: "<<_name<<endl<<"ID: "<<_id<<endl<<"Age: "<<_age<<endl<<"Contact: "<<_contact;
}