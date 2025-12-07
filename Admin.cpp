//
// Created by Roey on 07/12/2025.
//

#include "Admin.h"

void Admin::printAllMembers() const {
    ifstream file("membership_details.txt");
    if (!file.is_open()) {
        cout << "Membership file does not exist.\n";
        return;
    }
    cout << "\n===== All Member Details =====\n";
    string line;
    int index = 1;
    while (getline(file, line)) {
        if (line.empty()) continue;
        stringstream ss(line);
        string name, address, phone, cnic;
        getline(ss, name, ',');
        getline(ss, address, ',');
        getline(ss, phone, ',');
        getline(ss, cnic, ',');

        cout << "Customer " << index++ << ":\n";
        cout << "  Name    : " << name << "\n";
        cout << "  Address : " << address << "\n";
        cout << "  Phone   : " << phone << "\n";
        cout << "  CNIC    : " << cnic << "\n\n";
    }
}


void Admin::deleteMemberByCNIC(const string& cnic) {
    ifstream file("membership_details.txt");
    if (!file.is_open()) {
        cout << "Membership file does not exist.\n";
        return;
    }
    vector<string> lines;
    string line;
    bool found = false;
    // Read all lines
    while (getline(file, line)) {
        if (line.find(cnic) != string::npos)
            found = true;  // mark that we found the CNIC
        else
            lines.push_back(line);  // keep this line
    }
    file.close();
    if (!found) {
        cout << "No customer with CNIC " << cnic << " found.\n";
        return;
    }
    // Write remaining lines back to file
    ofstream out("membership_details.txt");
    for (const auto& l : lines)
        out << l << "\n";
    out.close();
    cout << "Customer with CNIC " << cnic << " deleted successfully.\n";
}