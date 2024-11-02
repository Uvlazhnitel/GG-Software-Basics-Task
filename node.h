#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <stdexcept>

struct Node {
    int data;
    Node* next;
};

Node* createNode(int value);
void insertEnd(Node** head, int value);
void displayList(Node* head);

#endif
