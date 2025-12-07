//
// Created by Roey on 07/12/2025.
//

#include "Client.h"



//Bill Generation
void Client::generateBill() {
    int days{};
    int choice{};

    cout << "\n~~ Generating Bill ~~\n"
              << "Number of days to rent: ";
    cin >> days;

    cout << "Driver needed? (1->Yes , 2->No). Driver charges: 500/day: ";
    cin >> choice;

    double driverCost = (choice == 1 ? 500.0 * days : 0.0);
    double bill = (days * _pricePerDay) + driverCost;
    double tax = bill * 0.10;
    double revenue = bill * 0.90;
    // update static trackers
    _bill += bill;
    _tax += tax;
    _revenue += revenue;
    cout << "## GENERATED BILL: " << bill << " ##\n";
}


int Client::_points=0;
double Client::_bill=0;
double Client::_tax = 0.0;
double Client::_revenue = 0.0;