#include <iostream>
using namespace std;

class Node {                                    // node structure
    public:
    int data;
    Node * next;
    Node * prev;
    Node(int d) {
        data = d;
        next = NULL;
        prev = NULL;
    }
};

class LinkedList {                              // linked list class
    public:
    Node * head;

    void append (int data) {                    // append element in the linked list
        if (head == NULL) {
            head = new Node(data);
            return;
        }
        Node * ptr = head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        Node * fresh = new Node(data);
        ptr->next = fresh;
        fresh->prev = ptr;
    }

    void preappend (int data) {                 // append at the front
        if (head == NULL) {
            cout << "Linked list is empty" << endl;
            return;
        }
        Node * temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;                            // head now pointing to the updated list
    }

    void append_after (int data, int key) {     // append after an element
        if (head == NULL) {
            cout << "Linked list is empty" << endl;
            return;
        }
        Node * ptr = head;
        while (ptr->data != key && ptr->next != NULL) {
            ptr = ptr->next;
        }
        Node * temp = new Node(data);
        if (ptr->next != NULL) {                // binding data
            temp->next = ptr->next;
        }
        ptr->next = temp;
        temp->prev = ptr;
    }

    void display() {                            // display linked list
        if (head == NULL) {
            cout << "Linked list is empty" << endl;
            return;
        }
        Node * ptr = head;
        while (ptr != NULL) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList * head = new LinkedList();
    head->display();
    head->append(20);
    head->append(30);
    head->append(40);
    head->display();
    head->preappend(10);
    head->append_after(35, 30);
    head->display();
    return 0;
}