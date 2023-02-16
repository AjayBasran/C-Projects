#pragma once

class Account {
    public:
        
        struct account {
            double balance; //account balance
            int number; //account number
            const char* name; //customer name
            const char* date; //account creation date            
        };

        Account(void);

        void Add(account x, double b,const char *n);
        void Delete(int key);
        void Deposit(int key, double amount);
        void Withdrawal(int key, double amount);
        void Display(int account_num);

    private:
        
};