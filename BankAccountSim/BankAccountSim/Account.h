#pragma once

class Account {
    public:
        
        // struct account {
        //     int number; //account number
        //     const char* name; //customer name
        //     const char* date; //account creation date
        //     double balance; //account balance   
            
        //     friend std::ostream& operator<<(std::ostream& os, const account& a) {
        //     os << "balance=" << a.balance << ", number=" << a.number << ", name=" << a.name << ", date=" << a.date;
        //     return os;
        //     }
        // };

        Account(void);
        void Add(const char* name, double balance);
        void Delete(int key);
        void Deposit(int key, double amount);
        void Withdrawal(int key, double amount);
        void Display(int account_num);

    private:
        
};

