#include <iostream>

#include "Car.h"
#include "Employee.h"
#include "Admin.h"
#include "Driver.h"
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<fstream>
#include "Sedan.h"
#include "Client.h"
#include "Convertible.h"
#include "Coupe.h"
#include "Minivans.h"
#include "Member.h"
#include "Non_Member.h"

using namespace std;
#include <iostream>
#include <conio.h>
#include <string>

#include "Company.h"
#include "Client.h"
#include "Member.h"
#include "Non_Member.h"
#include "Admin.h"
#include "Driver.h"
#include "Sedan.h"
#include "Convertible.h"
#include "Coupe.h"
#include "Minivans.h"


using namespace std;

int main()
{
    Company company;

    while(true)  // main loop
    {
        cout << endl << "~~~  WELCOME TO XYZ CAR RENTAL COMPANY  ~~~" << endl;
        cout << "Enter your ID to Log-in (0 = Exit)" << endl;

        int id;
        cin >> id;
        system("CLS");

        if(id == 0)
            break;

        // ===== ADMIN =====
        if(id == 1)
        {
            Admin admin("Admin", 0001, 30, 526453801);
            cout << "\tWelcome Admin\n";
            cout << "1. View All Customers\n";
            cout << "2. Remove Customer\n";
            cout << "Select option: ";

            int choice;
            cin >> choice;

            switch(choice)
            {
                case 1:
                    admin.printAllMembers();
                    break;
                case 2:
                    string nic;
                    cout<<"Enter Nic for deletion:"<<endl;
                    cin>>nic;
                    admin.deleteMemberByCNIC(nic);
                    break;
                default:
                    cout << "Invalid\n";
            }

            cout << "press key to return to menu"; getch();
            system("CLS");
        }

        // ===== DRIVER =====
        else if(id == 2)
        {
            Driver d("Driver",0002,25,543214565,5);
            cout << "Driver Rating: " << d.view_rating()<<endl;
            cout << "press key"; getch();
            system("CLS");
        }

        // ===== CLIENT =====
        else if(id == 1111)
        {
            bool inClientMenu = true;

            while(inClientMenu)
            {
                int choice1;
                cout << "1. View Car Details\n";
                cout << "2. Book a Car\n";
                cout << "3. Log out\n";
                cin >> choice1;
                system("CLS");

                switch(choice1)
                {
                    case 1:     // view car types
                    {
                        cout << "1. Sedan\n2. Convertible\n3. Coupe\n4. Minivan\n";
                        int t; cin >> t;
                        system("CLS");

                        if(t==1){ Sedan s; s.CarDetails();}
                        if(t==2){ Convertible c; c.CarDetails();}
                        if(t==3){ Coupe c; c.CarDetails();}
                        if(t==4){ Minivans m; m.CarDetails();}

                        cout << "press key"; getch();
                        system("CLS");
                    }
                    break;

                    case 2:     // booking
                    {
                        cout<<"Member? Yes/No"<<endl;
                        string type; cin>>type;
                        if(type=="Yes")
                        {
                            Member m;
                            m.inputMemberDetails();
                        }
                        else
                        {
                            Non_Member n;
                            n.getMembership();

                        }
                    }
                    break;
                    case 3:
                        inClientMenu = false;
                        break;
                    default:
                        break;
                }
            }
            system("CLS");
        }

        else
        {
            cout << "Unknown ID" << endl;
            getch();
            system("CLS");
        }
    }

    cout << "Goodbye :)" << endl;
    return 0;
}