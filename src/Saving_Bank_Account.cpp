#include "Saving_Bank_Account.h"

void Saving_Bank_Account::withDraw()
{
    /// withdraw implementation for Saving Bank Account

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
        system( "Pause" );
    }
}

void Saving_Bank_Account::Deposit()
{
    /// Deposit implementation for Saving Bank Account

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
    if ( value >= this->Deposit_Value )
    {
        this->Balance += value;
        /** Message **/
    }
    else if ( value < 0 )
    {
        cout << "Invalid Input" << endl;
        system( "Pause" );
    }
    else if ( value < this->Deposit_Value )
    {
        cout << "The Value you want to deposit is less than the minimum value" << endl;
    }
}

void Saving_Bank_Account::setBalance()
{
    /// set Balance implementation for Saving Bank Account

    long long int balance_input = 0; string strBalance = "";
    cout << "Enter The Balance :  ";
    cin  >> strBalance;

    /// check for valid
    if ( !isValid( strBalance ) )
    {
        cout << "Invalid input\n\n" , balance_input = 0;
        return;
    }
    else
    {
        /// check for huge number
        if ( strBalance.length() <= 18 )
            balance_input = atoll( strBalance.c_str() );
        else
        {
            cout << "Invalid Input ( Huge Number )\n\n";
            return;
        }
    }

    /// process if all constrains is valid
    if ( balance_input >= this->intial_Balance )
    {
        this->Balance = balance_input;
        /** message **/
    }
    else
    {
        account_ID -= 1;
        cout << "The balance value is less than the initial value" << endl;
    }

}
