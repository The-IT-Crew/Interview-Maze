// implementation of stack (LIFO) using fix size array (std::array)

#include <iostream>
#define SIZE 10                                     // size of the stack strucure
using namespace std;

class Stack {
    int stack[SIZE];                                // fix size array 
    int TOP;                                        // initialy pointing to imaginary location
    public: 

    Stack() {                                       // default constructor
        TOP = -1;
    }

    void push (int data) {                          // push data element into stack
        if (TOP == SIZE-1) {                        // if stack is full
            cout << "stack is full" << endl;
            return;
        }                                           // if stack is not full
        TOP += 1;
        stack [TOP] = data;
    }

    int pop () {                                    // pop data element from stack
        if (TOP == -1) {                            // stack is empty
            cout << "stack is empty" << endl;
            exit(0);
        }                                           // if stack is not empty
        int data = stack[TOP];
        TOP -= 1;
        return data;
    }

    int top () {                                    // return top elent of the stack
        if (TOP == -1) {                            // if stack is empty
            cout << "stack is empty" << endl;
            exit(0);
        }                                           // else
        return stack[TOP];
    }

    void display () {                               // display the elements of the stack
        if (TOP == -1) {                            // if stack is empty
            cout << "stack is empty" << endl;
            return;
        }       
        for (int i=0; i<=TOP; i++) {                // else
            cout << stack[i] << " ";
        }
        cout << endl;
    }
};

// driving code
int main () {
    Stack stack;
    stack.display();
    stack.push(10);
    stack.push(20);
    stack.display();
    stack.push(30);
    stack.push(40);
    stack.display();
    cout << "delete: " << stack.pop() << endl;
    cout << "top: " << stack.top() << endl;
    stack.display();
    return 0;
}