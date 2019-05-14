//
// Created by Mai Pham Quang Huy on 2019-05-14.
//

#include "Queue.h"

void Queue::insertItem(string s){
    Node* temp = new Node;
    if (temp == NULL) {
        cout << "Overflow" << endl;
        return;
    }
    temp->data = s;
    temp->next = NULL;

    if (front == NULL) {
        front = rear = temp;
    }
    else {
        rear-> next = temp;
        rear = temp;
    }
    cout << s << " has been inserted successfully." << endl;
}

void Queue::displayItem(){
    if (front == NULL) {
        cout << "Underflow" << endl;
        return;
    }
    Node* temp = front;
    //will check until NULL is not found
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void Queue::deleteItem()
{
    if (front == NULL) {
        cout << "Underflow" << endl;
        return;
    }
    cout << front->data << " is being deleted " << endl;
    if (front == rear) { //if only one node is there
        front=rear=NULL;
    } else
        front = front->next;
}

Queue::~Queue()
{
    while (front != NULL) {
        Node* temp = front;
        front = front->next;
        delete temp;
    }
    rear = NULL;
}