#include <iostream>
#include "Queue.h"

using namespace std;

int main(){
    Queue queue;
    queue.displayItem();

    queue.insertItem("A");
    queue.insertItem("B");
    queue.insertItem("C");
    queue.insertItem("D");
    queue.insertItem("E");

    queue.displayItem();

    queue.deleteItem();
    queue.deleteItem();
    queue.deleteItem();
    queue.deleteItem();
    queue.deleteItem();

    return 0;
}
