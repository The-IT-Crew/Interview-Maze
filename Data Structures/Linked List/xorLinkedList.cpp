// implementation of XOR linked list
// In the XOR linked list, instead of storing actual memory addresses,
// every node stores the XOR of addresses of previous and next nodes. 
// current->link = previous (XOR) next

#include <iostream>
using namespace std;

class Node {                                    // node structure
    public:
    int data;
    Node * link;
    Node (int item) {
        data = item;
        link = NULL;                        // storing 0 at the link
    }
};

Node* Xor (Node * ptr1, Node * ptr2 = reinterpret_cast <Node*>(0)) {          // XOR of two Node pointers
    return reinterpret_cast <Node*> (
        reinterpret_cast <uintptr_t> (ptr1) ^
        reinterpret_cast <uintptr_t> (ptr2)
    );
}

class LinkedList {                              // linked list class
    private:
    Node * head;
    public:

    LinkedList () {                             // default constructure
        head = NULL;
    }

    void push (int data) {
        if (head == NULL) {                     // if list is empty
            head = new Node(data);
        }                                       // else
        Node * fresh =  new Node(data);
        Node * ptr = head;
        fresh->link = Xor(ptr);
    }

    /*

                            ptr
    10          20          30
  0 ^ 20     10 ^ 30     20 ^ 0

    */

    int pop () {

        return 1;
    }

    void display () {
        
    }
};

int main () {                                   // driving code
    LinkedList list;
    list.display();                             // error: list is empty
    list.push(10);
    list.push(20);
    list.push(30);
    list.display();
    cout << "delete: " << list.pop() << endl;
    list.display();

}