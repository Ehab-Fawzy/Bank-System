#include "Bank_Client.h"

#include <iostream>
using namespace std;


Bank_Client::Bank_Client()
{
    // ctor
    this->client_Name   = "";
    this->Address       = "";
    this->PhoneNumber   = "";
}

Bank_Client::Bank_Client( string name , string address , string phone )
{
    /// set info
    this->setDetails( name , address , phone );
}

void Bank_Client::setDetails( string name , string address , string phone )
{
    /// set info
    this->client_Name   = name;
    this->Address       = address;
    this->PhoneNumber   = phone;
}

string Bank_Client::getName()
{
    /// get name
    return this->client_Name;
}
string Bank_Client::getAddress()
{
    /// get add
    return this->Address;
}
string Bank_Client::getPhoneNumber()
{
    /// get phone number
    return this->PhoneNumber;
}

void   Bank_Client::print_Accounts()
{
    /// print Accounts
    int loop = this->Accounts.size();
    for ( int i = 0; i < loop; i++ )
    {
        cout << "-----------\n";
        Accounts[i]->print_Account_Details();
        //cout << "-----------\n";
    }
}

void   Bank_Client::add_Account( Account_Types* ptr )
{
    /// pushBack Account
    this->Accounts.push_back( ptr );
}

void   Bank_Client::print_Client_Info()
{
    /// print info
    cout << "---------------------------------\n";
    cout << "Name         : " << this->client_Name  << endl
         << "Address      : " << this->Address      << endl
         << "Phone Number : " << this->PhoneNumber  << endl;
}


