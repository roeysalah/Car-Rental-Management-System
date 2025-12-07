//
// Created by Roey on 07/12/2025.
//

#ifndef ADMIN_H
#define ADMIN_H

#include "Employee.h"
#include <iostream>
#include <fstream>
#include "Employee.h"
#include <vector>
#include <string>

class Admin : public Employee {
public:
	Admin(const string& name, int id, int age, long contact);

	void printAllMembers() const;
	void deleteMemberByCNIC(const string& cnic);
};

#endif //ADMIN_H
