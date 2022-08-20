// queue implementation using single lined list

#include <iostream>
using namespace std;

class Node {                                    // node structure
    public:
    int data;
    Node * link;
    Node (int item) {                           // default constructor
        data = item;
        link = NULL;
    }
};

class Queue {                                   // queue class
    private:
    Node * front;
    Node * rear;

    public: 
    Queue () {                                  // default constructor
        rear = front = NULL;
    }
    
    void push (int data) {                      // push item into queue
        Node * fresh = new Node(data);
        if (front == NULL && rear == NULL) {    // queue is empty
            rear = front = fresh;
        } else {                                // else
            Node * ptr = front;
            while (ptr->link != NULL) {
                ptr = ptr->link;
            }
            ptr->link = fresh;
            rear = fresh;
        }
    }

    int pop () {                                // pop item from queue
        if (front == NULL && rear == NULL) {    // queue is empty
            cout << "queue is empty" << endl;
            exit(0);
        }
        int data;
        data = front->data;
        Node * ptr = front;
        front = front->link;
        delete ptr;                             // free memory from heap
        return data;
    }

    int qfront () {                              // display front of the queue
        return front->data;
    }

    int qrear () {                               // display back of the queue
        return rear->data;
    }

    void display () {                           // display queue elements
        if (rear == NULL && front == NULL) {
            cout << "queue is empty" << endl;
            exit(0);
        }
        Node * ptr = front;
        while (ptr != NULL) {
            cout << ptr->data << " ";
            ptr = ptr->link;
        }
        cout << endl;
    }
};

int main () {                                   // deiving code
    Queue queue;
    queue.push(10);
    queue.push(20);
    queue.push(30);
    queue.display();
    cout << "front: " << queue.qfront() << endl;
    cout << "back: " << queue.qrear() << endl;
    cout << "delete: " << queue.pop() << endl;
    queue.display();
    return 0;
}