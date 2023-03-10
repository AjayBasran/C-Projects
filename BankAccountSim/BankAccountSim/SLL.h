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
        void updatebyKey(int k, const char* d);
        void print(int account_num);
        const char* find(int account_num);
    private:
};