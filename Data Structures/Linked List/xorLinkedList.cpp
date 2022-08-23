// implementation of XOR linked list
// In the XOR linked list, instead of storing actual memory addresses,
// every node stores the XOR of addresses of previous and next nodes. 

#include <iostream>
using namespace std;

class Node {                                    // node structure
    public:
    int data;
    Node * link;
    Node (int item) {
        data = item;
        link = NULL;
    }
};

class LinkedList {
    private:
    Node * head;
    public:

    LinkedList () {                             // default constructure
        head = NULL;
    }


};

int main () {                                   // driving code

}