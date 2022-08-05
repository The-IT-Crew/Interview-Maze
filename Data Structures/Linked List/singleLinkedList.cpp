#include <iostream>
using namespace std;

class Node {                            // node structure
    public:
    int data;
    Node * link;
    Node(int d){
        data = d;
    }
};

class LinkedList {
    public:
    Node * head;
    void append(int data){
        if (head == NULL) {                     // if head is empty
            head = new Node(data);
            return;
        }                                       // if head is not empty
        Node * ptr = head;
        while (ptr->link != NULL) {
            ptr = ptr->link;
        }
        Node * fresh = new Node(data);
        ptr->link = fresh;
        fresh->link = NULL;
    }
    void preappend(int data){                   // append at the front
        if (head == NULL) {                     // if head is empty
            head = new Node(data);
            return;
        }                                       // if head is not empty
        Node * fresh = new Node(data);
        fresh->link = head;
        head = fresh;
    }
    void append_after(int data, int key){       // append after the key data
        if (head == NULL) {
            cout << "list underflow" << endl;
            return;
        }
        Node * ptr = head;
        while (ptr->link != NULL && ptr->data != key) {
            ptr = ptr->link;
        }
        Node * fresh = new Node(data);
        fresh->link = ptr->link;
        ptr->link = fresh;
    }
    void display(){                             // display the linked list
        Node * ptr = head;
        while (ptr != NULL) {
            cout << ptr->data <<" ";
            ptr = ptr->link;
        }
        cout << endl;
    }
};

int main(){
    LinkedList * head = new LinkedList();
    head->append(20);
    head->preappend(10);
    head->append(30);
    head->append_after(40, 30);
    head->display();
    return 0;
}