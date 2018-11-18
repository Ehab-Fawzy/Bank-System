#ifndef USER_INTERFACE_H
#define USER_INTERFACE_H

#include "Account_Types.h"
#include "Bank_Account.h"
#include "Saving_Bank_Account.h"
#include "Bank_Client.h"

#include <iostream>
#include <algorithm>
using namespace std;

class User_InterFace
{
    public:
        User_InterFace();

        void print_Menu();
        void System_Execution();
        void Login();

        void create_Account();
        void list_Accounts();
        void withDraw();
        void deposit();
        int  search_Client( Bank_Client object );

        bool isValid_Number( string number );
        bool isValid_Letter( string word   );

    protected:
        vector < Bank_Client    > clients_objects;
        vector < Account_Types* > Access_Accounts;

    private:
        string password = "fci-bs2018";
        bool key = false;
};

bool operator== ( Bank_Client object1 , Bank_Client object2 );

#endif // USER_INTERFACE_H
