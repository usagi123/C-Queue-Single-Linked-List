//
// Created by Mai Pham Quang Huy on 2019-05-14.
//

#ifndef QUEUE_3_QUEUE_H
#define QUEUE_3_QUEUE_H

#include <iostream>

using namespace std;

struct Node{
    string data;
    Node *next;
};

class Queue{
public:
    Node *front,*rear;
    Queue(){front=rear=NULL;}

    void insertItem(string n);
    void deleteItem();
    void displayItem();
    ~Queue();
};

#endif //QUEUE_3_QUEUE_H
