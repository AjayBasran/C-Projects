#include <iostream>

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
2.    deleting existing accounts
3.    crediting/depositing to an existing account
4.    debiting/withdrawing from an existing account
5.    displaying information for a single specific account
6.    displaying a list of all accounts within the bank
*/

int main(void) {
    string input;
    int endprogram = 0;
    cout << "Welcome to Ajay's Bank Management System!" << endl;
    cin.ignore();

    cout << "******************************************" << endl;
    
    while(endprogram != 1) {
    
        cin >> input;

    }
    return 0;
}