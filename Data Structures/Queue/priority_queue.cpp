// priority queue implementation using linked list

#include <iostream>
using namespace std;

class Node {                                // node class
    public:
    int data;                               // data element
    int priority;
    Node * link;
    Node (int item, int pt) {               // default constructor
        data = item;
        priority = pt;
        link = NULL;
    }
};

class PriorityQueue {                       // priority queue class
    private:
    Node * front;                           // front of the queue
    Node * rear;                            // rear of the queue
    public:
    PriorityQueue () {                      // default constructor
        front = NULL;
        rear = NULL;
    }

    void push (int data, int priority) {
        Node * fresh = new Node(data, priority);
        // if queue is empty
        if (front == NULL && rear == NULL) {
            front = fresh;
            rear = fresh;
            return;
        }                                   // else
        Node * ptr = front;
        while (ptr->link != NULL && ptr->priority <= priority) {
            ptr = ptr->link;
        }
        if (ptr->link == NULL) {            // if: ptr reached the last node of the queue
            ptr->link = fresh;
            rear = fresh;
        }
        else {                              // else: enter as priority
            fresh->link = ptr->link->link;
            ptr->link = fresh;
        }
    }

    void display () {                       // display the queue elements
        // if queue is empty
        if (front == NULL && rear == NULL) {
            cout << "queue is empty" << endl;
            return;
        }                                   // else
        Node * ptr = front;
        while (ptr != NULL) {
            cout << ptr->data << " ";
            ptr = ptr->link;
        }
        cout << endl;
    }
};

int main () {                               // driving code
    PriorityQueue pq;
    pq.push(10, 5);
    pq.push(20, 1);
    pq.push(30, 4);
    pq.push(40, 3);
    pq.push(50, 1);
    pq.push(60, 0);
    pq.display();
    return 0;
}