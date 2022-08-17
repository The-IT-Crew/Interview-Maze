// representation of circular lined list using single linked list
// circular linked list can be implemented using double linked list as well

#include <iostream>
using namespace std;

class Node {                                    // node class
    public:
    int data;
    Node * next;
    Node (int data) {
        data = data;
        next = NULL;
    }
};

class LinkedList {                              // linked list class
    public:
    Node * head;                                // head of the linked list

    void append (int data) {                    // append an element in the linked list
        if (head == NULL) {
            head = new Node(data);
            return;
        }
        Node * ptr = head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        Node * fresh = new Node(data);
        fresh->next = head;
        ptr->next = fresh;
    }

    void preappend (int data) {                 // append an element before the linked list

    }

    void append_after (int data, int key) {     // append an element after a specific key

    }

    void display () {                           // display the linekd list
        if (head != NULL) {
            cout << "Lined list is empty" << endl;
            return;
        }
        Node * start = head;
        Node * ptr = head;
        while (ptr->next != start) {
            cout << ptr->data << " ";
        }
        cout << endl;
    }
};

// driving code
int main() {
    LinkedList * head = new LinkedList();
    head->display();                    // empty
    head->append(20);
    head->append(30);
    head->display();
}