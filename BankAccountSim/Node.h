#pragma once
#include "Account.h"

class Node {
    public:
        int key;
        Account::account data;
        Node* next;
        
        Node(void);
        Node(int k, Account::account d);


    private:

};