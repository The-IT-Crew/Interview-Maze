// circular queue using fixed sized array
#include <iostream>
#define SIZE 3                                  // size of the queue
using namespace std;

class Queue {                                   // queue class
    private:
    int queue[SIZE];
    int front, rear;

    public:
    Queue () {                                  // default constructor
        front = -1;
        rear = -1;
    }

    void push (int data) {                      // push element into the queue
        if (front == -1 && rear == -1) {        // queue is empty
            rear = front = 0;
            queue[rear] = data;
            return;
        }
        int next = (rear+1) % SIZE;             // next circular location
        if (next != front) {                    // if queue is full
            rear = next;
            queue[rear] = data;
        } else {
            cout << "queue is full" << endl;
        }
    }

    int pop () {                                // pop element from the queue
        if (front == -1) {                      // if queue is empty
            cout << "queue is empty" << endl;
            exit(0);
        }                                       // else
        int item;
        item = queue[front];
        if (front == rear) {                    // reset front and rear
            front = -1;
            rear = -1;
        } else {
            front = (front+1) % SIZE;
        }
        return item;
    }

    int qfront () {                             // front element of the queue
        return queue[front];
    }

    int qrear () {                              // rear element of the queue
        return queue[rear];
    }

    void display () {                           // display the queue elements
        if (front == -1 && rear == -1) {        // queue is empty
            cout << "queue is empty" << endl;
            exit(0);
        }                                       // else
        if (rear < front) rear = SIZE + rear;
        for (int i=front; i<=rear; i++) {
            cout << queue[i%SIZE] << " ";
        }
        cout << endl;
    }
}; 

int main () {                                   // driving code
    Queue queue;
    queue.push(10);
    queue.push(20);
    queue.push(30);
    queue.push(40);                             // error: queue is full
    queue.display();
    cout << "front: " << queue.qfront() << endl;
    cout << "back: " << queue.qrear() << endl;
    cout << "delete: " << queue.pop() << endl;
    queue.push(40);
    queue.display();
    return 0;
}