#include <iostream>
#include "Account.h"

using namespace std;

/*
you will need to create a class called Account. 
The class Account is used to represent customers' bank accounts. 

Your class should include four data members:
account balance (a double), 
 account number (an integer), 
 customer name (a string), 
 and date the account was opened (a string). 
 
 Your class should provide two constructors: 
 one default constructor with no parameters
 
 one constructor with the initial balance, account number, customer name, and date created as parameters. 
 The second constructor should check the initial balance. If the balance is not >= 0, 
 the balance should be set to 0 and an error message should be displayed.
*/
/*
1.  adding new accounts
2.  deleting existing accounts
3.  crediting/depositing to an existing account
4.  debiting/withdrawing from an existing account
5.  displaying information for a single specific account
6.  displaying a list of all accounts within the bank
*/
void help(){
    cout 
        << "******************************************" << endl
        << "Options Available:" << endl
        << "Press 1.  Adding new accounts" << endl
        << "Press 2.  Deleting existing accounts" << endl
        << "Press 3.  Depositing to an existing account" << endl
        << "Press 4.  Withdrawing from an existing account" << endl
        << "Press 5.  Single account display" << endl
        << "Press 6.  All accounts display" << endl
        << "Press 0 to exit" << endl
        << "******************************************" << endl;
}
int main(void) {
    string input;
    string name;
    double balance;
    int key;
    Account a_obj;
    const char* temp;

    cout << "Welcome to Ajay's Bank Management System!" << endl;
    cin.ignore();

    do {
        cout << "******************************************" << endl;
        cout << "Type pound for options assistance!" << endl;
        cin >> input;
        if(input == "#") help();
        else if (input == "1") {
            cout 
                << "******************************************" << endl
                << "Enter account information in order:" << endl
                << "Name" << endl;
            cin >> name;
            cout << "Balance" << endl;
            cin >> balance;

            a_obj.Add(name.c_str(),balance);
        }
        else if (input == "2") {
            cout 
                << "******************************************" << endl
                << "Enter account number:" << endl;
            cin >> key;

            a_obj.Delete(key);
        }
        else if (input == "3") {
            cout 
                << "******************************************" << endl
                << "Enter account information in order:" << endl
                << "Account number" << endl;
            cin >> key;
            cout << "Deposit amount!" << endl;
            cin >> balance;

            a_obj.Deposit(key,balance);
        }
        else if (input == "4") {
            cout 
                << "******************************************" << endl
                << "Enter account information in order:" << endl
                << "Account number" << endl;
            cin >> key;
            cout << "Withdrawal amount!" << endl;
            cin >> balance;

            a_obj.Deposit(key,balance);
        }
        else if (input == "5") {
            cout 
                << "******************************************" << endl
                << "Enter account information in order:" << endl
                << "Account number" << endl;
            cin >> key;

            a_obj.Display(key);
        }
        else if (input == "0") {
            cout << "******************************************" << endl
                << "Logging off..." << endl
                << "******************************************" << endl;
            return 0;
        }
        else cout << "Unrecognized input! Please try again. If unsure press # for assistance" << endl;
    }
    while(input != "0");
}