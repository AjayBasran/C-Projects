#include "Account.h"
#include "SLL.h"
#include "Node.h"
#include <ctime>
#include <iostream>

SLL s_obj;
int avail_accnum = 0;

Account::Account(void) {

}

void Account::Add(const char* name, double balance) {

        time_t ltime;
        time(&ltime); 
        
        const char* date = ctime(&ltime);

        for (int i = 0; i < 4; i++) {
                Node* n1 = new Node();
                n1->key = avail_accnum;
                if (i == 0) n1->data = name;
                else if (i == 1) n1->data = date;
                else if (i == 2) n1->data = std::to_string(balance).c_str();

                s_obj.SLL::append(n1);
                avail_accnum +=1;
        }
        //actual account number starts at 0,4,8,12
        //names are account number + 1: 1,5,9,13
        //dates are account number + 2: 2,6,10,14
        //balances are account number + 3: 3,7,11,15
}

void Account::Delete(int key) {
        int temp = key;
        while (temp < key+4) s_obj.SLL::deletebyKey(temp);
}
void Account::Deposit(int key, double amount) {
        if (amount > 0){
                const char* temp = std::to_string(
                        std::strtod(s_obj.find(key+3), nullptr) + amount)
                        .c_str();        
                s_obj.SLL::updatebyKey(key,temp);
        }
        else std::cout << "Error, amount must be above 0" << std::endl; 
}
void Account::Withdrawal(int key, double amount) {
        if (amount > 0){
                const char* temp = std::to_string(
                        std::strtod(s_obj.find(key+3), nullptr) - amount)
                        .c_str();        
                s_obj.SLL::updatebyKey(key,temp);
        }
        else std::cout << "Error, amount must be above 0" << std::endl; 
}
void Account::Display(int account_num) {
        for (int i = account_num; i < account_num + 4; i++) 
                s_obj.SLL::print(i);
}

