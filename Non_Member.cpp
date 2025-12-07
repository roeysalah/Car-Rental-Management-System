//
// Created by Roey on 07/12/2025.
//

#include "Non_Member.h"


void Non_Member::Book_Car() {
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

void Non_Member::getMembership() {
    string temp;

    cout << "Enter your Name: ";
    cin >> temp;
    setName(temp);

    cout << "Enter your Address: ";
    cin >> temp;
    setAddress(temp);

    long int phone;
    cout << "Enter your Phone No: ";
    cin >> phone;
    setPhone(phone);

    long int cnic;
    cout << "Enter your CNIC: ";
    cin >> cnic;
    setCNIC(cnic);

    _memberId = 1215;
    _password = "ghqw45661";

    cout << "You have successfully become a member.\n"
              << "Member ID: " << _memberId << "\n"
              << "Password: " << _password << "\n\n";

    ofstream file("membership_details.txt", ofstream::app);
    file << getName() << "," << getAddress() << ","
         << getPhone() << "," << getCNIC() << "\n";
}

void Non_Member::printMembershipVoucher() const {
    cout << "=== MEMBERSHIP VOUCHER ===\n"
              << "Member ID: " << _memberId << "\n"
              << "Name: " << getName() << "\n"
              << "Address: " << getAddress() << "\n"
              << "Phone No: " << getPhone() << "\n"
              << "CNIC: " << getCNIC() << "\n"
              << "Points: " << Client::getPoints() << "\n\n";
}