// stack representation using linked list
#include <iostream>
using namespace std;

class Node {                                        // node structure
    public: 
    int data;
    Node * link;
    Node (int item) {                               // constructor
        data = item;
        link = NULL;
    }
};

class Stack {                                       // stack class
    private:
    Node * head;                                    // head of the linked list
    Node * TOP;                                     // pointing top of the stack
    public:

    Stack () {                                      // default constructor
        head = NULL;
    }

    void push (int data) {                          // push element into stack
        if (head == NULL) {
            head = new Node(data);
            TOP = head; 
        } else {                                    // else
            Node * ptr = head;
            while (ptr->link != NULL) {
                ptr = ptr->link;
            }
            Node * fresh = new Node (data);
            ptr->link = fresh;
            TOP = fresh;
        }
    }

    int pop () {                                    // pop element from stack
        int back = 0;
        if (head == NULL) {                         // stack is empty
            cout << "stack is empty" << endl;
            exit(0);
        } else {                                    // else
            Node * ptr = head;
            while (ptr->link->link != NULL) {
                ptr = ptr->link;
            }
            back = ptr->link->data;
            delete ptr->link;                       // free memeory from heap
            ptr->link = NULL;
            TOP = ptr;
        }
        return back;
    }

    int top () {                                    // return top element of the stack
        return TOP->data;
    }

    void display () {                               // display element of the stack
        Node * ptr = head;
        if (head == NULL) {                         // if stack is empty
            cout << "stack is empty" << endl;
            exit(0);
        }
        while (ptr != NULL) {                       // else
            cout << ptr->data << " ";
            ptr = ptr->link;
        }
        cout << endl;
    }
};

int main () {                                       // drving code
    Stack stack;
    stack.display();
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.display();
    cout << "top: " << stack.top() << endl;
    cout << "delete: " << stack.pop() << endl;
    stack.display();
    cout << "top: " << stack.top() << endl;
    return 0;
}