#pragma once
#include "Node.h"
#include "Account.h"

class SLL {
    public:
        Node* head;

        SLL();
        SLL(Node *n);

        Node* exists(int k);
        void append(Node* n);
        // void prepend(Node* n);
        // void insert(int k, Node* n);
        void deletebyKey(int k);
        // void updatebyKey(int k, Account::account d);
        void print();
    private:
};