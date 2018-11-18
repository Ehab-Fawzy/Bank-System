#include "Account_Types.h"

int Account_Types::account_ID = 1;

Account_Types::Account_Types()
{
    /// default ctor
    this->ID = 0;
    this->Balance = 0;
}

void Account_Types::create_Account()
{
    /// create Account implementation
    this->ID = this->account_ID;
    account_ID++;

    this->setBalance();
}

int Account_Types::getId()
{
    return this->ID;
}

int Account_Types::getBalance()
{
    return this->Balance;
}

void Account_Types::setType( string type_input )
{
    this->type = type_input;
}

void Account_Types::print_Account_Details()
{
    /// print info
    cout << "Account Id   :  " << this->ID      << endl
         << "Balance      :  " << this->Balance << endl
         << "Bank Type    :  " << this->type    << endl;
}

bool Account_Types::isValid( string number )
{
    /// check for Valid number
    for ( int i = 0; i < (int)number.length(); i++ )
        if ( !isdigit( number[ i ] ) )
            return false;
    return true;
}
