#include "Bank_Account.h"

Bank_Account::Bank_Account()
{
    // default ctor
}

void Bank_Account::withDraw()
{
    /// withdraw implementation for Basic Bank Account

    long long int value = 0; string strValue = "";
    cout << "Enter the Value you want to withdraw :  ";
    cin  >> strValue;

    /// check for valid
    if ( !isValid( strValue ) )
        cout << "Invalid input\n\n" , value = 0;
    else
    {
        /// check for huge number
        if ( strValue.length() <= 18 )
            value = atoll( strValue.c_str() );
        else
            cout << "Invalid Input ( Huge Number )\n\n";
    }

    /// process if all constrains is valid
    if ( value <= this->Balance )
    {
        this->Balance -= value;
        /** Message **/
    }
    else
    {
        cout << "Sorry Your Balance is less than the value you want to Withdraw" << endl;
    }
}

void Bank_Account::Deposit()
{
    /// Deposit implementation for Basic Bank Account

    long long int value = 0; string strValue = "";
    cout << "Enter the value you want to Deposit :  ";
    cin  >> strValue;

    /// check for valid
    if ( !isValid( strValue ) )
        cout << "Invalid input\n\n" , value = 0;
    else
    {
        /// check for huge number
        if ( strValue.length() <= 18 )
            value = atoll( strValue.c_str() );
        else
            cout << "Invalid Input ( Huge Number )\n\n";
    }

    /// process if all constrains is valid
    if ( value >= 0 )
    {
        this->Balance += value;
        /** Message **/
    }
    else
    {
        cout << "Invalid Input" << endl;
        system( "Pause" );
    }
}

void Bank_Account::setBalance()
{
    /// set Balance implementation for Basic Bank Account

    long long int balance_input = 0; string strBalance = "";
    cout << "Enter The Balance :  ";
    cin  >> strBalance;

    /// check for valid input
    if ( !isValid( strBalance ) )
        cout << "Invalid input\n\n" , balance_input = 0;
    else
    {
        /// check for huge number
        if ( strBalance.length() <= 18 )
            balance_input = atoll( strBalance.c_str() );
        else
            cout << "Invalid Input ( Huge Number )\n\n";
    }

    /// process if all constrains is valid
    if ( balance_input >= 0 )
    {
        this->Balance = balance_input;
        /** message **/
    }
    else
    {
        this->account_ID -= 1;
        cout << "Invalid Balance" << endl;
        system("Pause");
    }

}
