//
// Created by Roey on 07/12/2025.
//

#ifndef NON_MEMBER_H
#define NON_MEMBER_H

#include "Client.h"
#include <fstream>

class Non_Member : public Client {
private:
    int _memberId{};
    std::string _password;

public:
    void Book_Car() override;
    void getMembership();
    void printMembershipVoucher() const;
};


#endif //NON_MEMBER_H
