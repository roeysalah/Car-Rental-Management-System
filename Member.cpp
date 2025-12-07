//
// Created by Roey on 07/12/2025.
//

#include "Member.h"



void Member::inputMemberDetails() {
    cout << "Enter your Member ID: ";
    cin >> _memberId;

    cout << "Enter your password: ";
    cin >> _password;

    cout << "\n";
}

void Member::Book_Car() {
    cout << "BOOK CAR\n"
              << "Select the type of car you want to book:\n"
              << "1. Coupe\n2. Minivan\n3. Convertible\n4. Sedan\n\n";

    string choice;
    cin >> choice;

    int pointsToAdd = 0;

    if (choice == "Coupe") pointsToAdd = 100;
    else if (choice == "Minivan") pointsToAdd = 200;
    else if (choice == "Convertible") pointsToAdd = 300;
    else if (choice == "Sedan") pointsToAdd = 400;
    else {
        cout << "Invalid Entry!\n";
        return;
    }

    cout << "Car booked successfully!\n";
    Client::addPoints(pointsToAdd);
}

void Member::printMembershipVoucher() const {
    cout << "=== MEMBERSHIP VOUCHER ===\n"
              << "Member ID: " << _memberId << "\n"
              << "Name: " << getName() << "\n"
              << "Address: " << getAddress() << "\n"
              << "Phone No: " << getPhone() << "\n"
              << "CNIC: " << getCNIC() << "\n"
              << "Points: " << Client::getPoints() << "\n\n";
}

void Member::renewMembership() {
    // global reset (matches your design)
    Client::addPoints(-Client::getPoints());
}