#pragma once
#include "Account.h"

class Node {
    public:
        int key;
        const char* data;
        Node* next;
        
        Node(void);
        Node(int k, const char* d);

    private:

};