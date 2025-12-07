//
// Created by Roey on 07/12/2025.
//

#ifndef MEMBER_H
#define MEMBER_H


#include "Client.h"

class Member : public Client {
private:
    int _memberId{};
    string _password;

public:
    Member();
    void inputMemberDetails();
    void Book_Car() override;
    void printMembershipVoucher() const;
    void renewMembership();
};


#endif //MEMBER_H
