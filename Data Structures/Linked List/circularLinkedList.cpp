// representation of circular lined list using single linked list
// circular linked list can be implemented using double linked list as well

#include <iostream>
using namespace std;

class Node {                                    // node class
    public:
    int data;
    Node * next;
    Node (int item) {                           // constructor
        data = item;
        next = this;
    }
};

class LinkedList {                              // linked list class
    Node * head;                                // head of the linked list
    public:

    LinkedList () {                             // default constructor
        head = NULL;
    }

    void append (int data) {                    // append an element in the linked list
        if (head == NULL) {                     // list is empty
            head = new Node(data);
            return;
        }                                       // else
        Node * ptr = head;
        while (ptr->next != head) {
            ptr = ptr->next;
        }
        Node * fresh = new Node(data);
        ptr->next = fresh;                      // link new node
        fresh->next = head;                     // link last node with head
    }

    void preappend (int data) {                 // append an element before the linked list
        if (head == NULL) {                     // linked list is empty
            head = new Node(data);
            return;
        }                                       // else
        Node * fresh = new Node(data);
        Node * ptr = head;
        while (ptr->next != head) {             // traversing link list to the end
            ptr = ptr->next;
        }
        fresh->next = head;                     // fresh node to the head
        head = fresh;
        ptr->next = head;                       // link last node to the head
    }

    void display () {                           // display the linekd list
        if (head == NULL) {                     // list is empty
            cout << "Lined list is empty" << endl;
            return;
        }
        Node * start = head;
        Node * ptr = head->next;
        cout << start->data << " ";             // TODO: circulate the the 1st element using loop
        while (ptr != start) {                  // circulate the linkedlist
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
};

int main() {                                    // driving code
    LinkedList * head = new LinkedList();
    head->append(20);
    head->append(30);
    head->append(40);
    head->display();
    head->preappend(10);
    head->display();
}