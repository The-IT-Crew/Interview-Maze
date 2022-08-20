// queue using fixed sized array (std::array)

#include <iostream>
#define SIZE 10                                     // size of the queue
using namespace std;

class Queue {                                       // queue data structure
    private:
    int queue[SIZE];                                // fixed size array
    int front, rear;
    public:
    Queue () {                                      // default constructor
        front = -1;
        rear = -1;
    }

    void push (int data) {                          // push elemts into back
        if (rear == SIZE-1) {                       // queue is full
            cout << "queue is full" << endl;
            exit(0);
        } else {                                    // queue is not full
            if (front == -1 && rear == -1) {        // queue is empty
                front = 0;
            }
            rear += 1;                              // insert element to the rear pointer
            queue[rear] = data;
        }
    }

    int pop () {                                    // delete elements from front
        int item;
        if (front == -1) {                          // queue is empty
            cout << "queue is empty" << endl;
            exit(0);
        } else {                                    // else 
            item = queue[front];
            if (front == rear) {
                front = -1;
                rear = -1;
            } else {
                front += 1;
            }
        }
        return item;
    }

    int qfront () {                                  // front of the queue
        return queue[front];
    }

    int back () {                                   // back of the queue
        return queue[rear];
    }

    void display () {                               // display elements from queue
        if (rear == -1 ) {                          // if queue is empty
            cout << "queue is empty" << endl;
            exit(0);
        } else {                                    // else
            for (int i=front; i<=rear; i++) {
                cout << queue[i] << " ";
            }
            cout << endl;
        }
    }
};

int main () {                                       // driving code
    Queue queue;
    queue.push(10);
    queue.push(20);
    queue.push(30);
    queue.display();
    cout << "front: " << queue.qfront() << endl;
    cout << "back: " << queue.back() << endl;
    cout << "delete: " << queue.pop() << endl;
    queue.display();
    return 0;
}