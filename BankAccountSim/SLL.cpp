#include <iostream>
#include "SLL.h"
#include "Node.h"

SLL::SLL() {
    head = nullptr;
}

SLL::SLL(Node *n) {
    head = n;
}

Node* SLL::exists(int k) {
    Node* temp = nullptr;
    Node* ptr = head;

    while (ptr != nullptr) {
        if (ptr->key == k) temp = ptr;

        ptr = ptr -> next;
    }
    return temp;
}

void SLL::append(Node* n) {
    if(SLL::exists(n->key)!= nullptr){
        std::cout << "Error: Node already exists with key value! " 
                "Append another node with a different key value"
                << std::endl;
    }
    else {
        if (head == nullptr) head = n;
        else {
            Node* ptr = head;
            while (ptr != nullptr) ptr = ptr -> next;
            ptr-> next = n;
        }
    }
}

/*
void SLL::prepend(Node* n) {
    if(SLL::exists(n->key)!= nullptr){
        std::cout << "Error: Node already exists with key value! " 
                "Append another node with a different key value"
                << std::endl;
    }
    else {
        n-> next = head;
        head = n;
    }
}

void SLL::insert(int k, Node* n) {
    Node* ptr = SLL::exists(k);

    if(ptr == nullptr) std::cout << 'Error: No node exsts with key value ' << k << std::endl;
    else {
        if(SLL::exists(n->key) != nullptr) {
            std::cout << "Error: Node already exists with key value! " 
                "Append another node with a different key value"
                << std::endl;
        }
        else {
            n->next = ptr->next;
            ptr->next = n;
        }
    }
}
*/

void SLL::deletebyKey(int k) {
    if(head == nullptr) std::cout << "Error! SLL already empty, can't delete" << std::endl;

    else if (head != nullptr) {
        if (head->key == k) head = head->next;

        else{
            Node* temp = nullptr;
            Node* prevptr = head;
            Node* currentptr = head->next;
            while(currentptr!=nullptr) {
                if(currentptr->key == k) {
                    temp = currentptr;
                    currentptr = nullptr;
                }
                else {
                    prevptr = prevptr->next;
                    currentptr = currentptr->next;
                }
            }
            if(temp!=nullptr) prevptr->next = temp->next;
            else std::cout << "Node doesn't exist with key value: " << k << std::endl;

        }
    }
}

/*
void SLL::updatebyKey(int k, Account::account d) {
    Node* ptr = SLL::exists(k);
    if(ptr!=nullptr) ptr->data = d;
    else std::cout << "Node doesn't exist with key value: " << k << std::endl;
}
*/

void SLL::print(int account_num) {
    if(head == nullptr) std::cout << "No nodes in SLL" << std::endl;
    else {
        Node* temp = head;
        while(temp != nullptr) {
            if(account_num == temp->key) {
                std::cout 
                    << "("
                    << temp->key
                    << ","
                    <<temp->data
                    <<") --> ";
            }
            temp = temp -> next;
        }
    }
}

Account::account SLL::find(int account_num) {
    if(head == nullptr) std::cout << "No nodes in SLL" << std::endl;
    else {
        Node* temp = head;
        while(temp != nullptr) {
            if(account_num == temp->key) {
                return (temp->data); //Trying to access account from linked list in order to change the things in account
            }
            temp = temp -> next;
        }
    }
}
