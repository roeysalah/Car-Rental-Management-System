//
// Created by Roey on 07/12/2025.
//

#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include <iostream>
using namespace std;

class Client {
protected:
    // ==== Fields ====
    string _name;
    long int _cnic{};
    string _address;
    long int _phoneNo{};
    string _carType;
    float _pricePerDay{};

    // ==== Shared Across All Clients ====
    static int _points;
    static double _bill;
    static double _tax;
    static double _revenue;

public:
    // ==== Interface ====
    virtual void Book_Car() = 0;
    virtual ~Client() = default;

    // ==== Setters ====
    void setName(const string& name) noexcept { _name = name; }
    void setCNIC(long int cnic) noexcept { _cnic = cnic; }
    void setAddress(const string& address) noexcept { _address = address; }
    void setPhone(long int phoneNo) noexcept { _phoneNo = phoneNo; }
    void setPricePerDay(float price) noexcept { _pricePerDay = price; }

    // ==== Getters ====
    const string& getName() const noexcept { return _name; }
    const string& getAddress() const noexcept { return _address; }
    long int getCNIC() const noexcept { return _cnic; }
    long int getPhone() const noexcept { return _phoneNo; }
    float getPricePerDay() const noexcept { return _pricePerDay; }

    // ==== Static Setters ====
    static void addPoints(double x) noexcept { _points += x; }
    static void addTax(double x) noexcept { _tax += x; }
    static void addRevenue(double x) noexcept { _revenue += x; }

    // ==== Static Getters ====
    static int getPoints() noexcept { return _points; }
    static double getTax() noexcept { return _tax; }
    static double getRevenue() noexcept { return _revenue; }
    void generateBill();
};
#endif //CLIENT_H
