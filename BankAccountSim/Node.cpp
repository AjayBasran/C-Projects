#include "Node.h"
#include "Account.h"
Node::Node(void) {
    key = 0;
    next = nullptr;
}

Node::Node(int k, Account::account d) {
    key = k;
    data = d;
}