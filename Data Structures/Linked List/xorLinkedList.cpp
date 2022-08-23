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

// XOR of two Node pointers
Node* Xor (Node * ptr1, Node * ptr2 = NULL) {
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

    void push (int data) {                      // push element in the linked list
        if (head == NULL) {                     // if list is empty
            head = new Node(data);
            return;
        }                                       // else
        Node * fresh =  new Node(data);
        Node * ptr = head;
        Node * prev = NULL;
        Node * next;
        while (Xor(prev, ptr->link) != NULL) {  // iterate through the nodes
            next = Xor(prev, ptr->link);
            prev = ptr;
            ptr = next;
        }
        ptr->link = Xor(prev, fresh);           // update the 2nd last node
        fresh->link = Xor(ptr);                 // last node
    }

    void display () {                           // display the linked list
        if (head == NULL) {
            cout << "list is empty" << endl;
            return;                             // to terminate use exit(0)
        }                                       // else
        Node * curr = head;
        Node * prev = NULL;
        Node * next;
        while (curr != NULL) {                  // iterarte through the links
            cout << curr->data << " ";
            next = Xor(prev, curr->link);
            prev = curr;
            curr = next;
        }
        cout << endl;
    }
};

int main () {                                   // driving code
    LinkedList list;
    list.display();                             // error: list is empty
    list.push(10);
    list.push(20);
    list.push(30);
    list.display();
    return 0;
}