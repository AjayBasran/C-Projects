#include "Account.h"
#include "SLL.h"
#include "Node.h"
#include <ctime>

SLL s_obj;
int avail_accnum = 0;
Account::Account(void) {

}
void::Add(Account::account x, double balance, const char *name) {
        Node* n1 = new Node();

        time_t ltime;
        time(&ltime); 

        x.balance = balance;
        x.number = avail_accnum;
        x.name = name;
        x.date = ctime(&ltime);

        n1->key = avail_accnum;
        n1->data = x;

        s_obj.SLL::append(n1);
        avail_accnum +=1;
}

void Account::Delete(int key) {
        s_obj.SLL::deletebyKey(key);
}
void Account::Deposit(int key, double amount) {
        account x = s_obj.find(key);
        if (amount > 0) x.balance += amount;
        else std::cout << "Error, amount must be above 0"; 
}
void Account::Withdrawal(int key, double amount) {
        account x = s_obj.find(key);
        if (amount > 0) x.balance -= amount;
        else std::cout << "Error, amount must be above 0"; 
}
void Account::Display(int account_num) {
        s_obj.SLL::print(account_num);
}