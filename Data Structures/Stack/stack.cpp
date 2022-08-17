// implementation of stack (LIFO) using sigle linked list (std::forward_list)

#include <iostream>
#include <list>                         // single linked list, standard template library
using namespace std;

class Stack {
    list<int> list;                     // stack
    public:
    void push (int);                    // insert data at the end of the list
    int pop ();                         // delete data from the top
    void display ();                    // display the list
};

int main(){
    Stack list;
    list.display();                     // empty list
    list.push(10);
    list.push(20);
    list.push(30);
    list.display();                     // [10, 20, 30]
    list.pop();
    list.display();                     // [10, 20]
    return 0;
}

void Stack::push (int data) {
    list.push_back(data);               // insert data at the end of the linked list
}

int Stack::pop () {                     // delete element from the top
    if (list.empty() == true) {
        cout << "stack underflow! can not delete element" << endl;
        return;
    }
    int back = list.back();
    list.pop_back();                    // delete the last element
    return back;
}

void Stack::display () {                // display stack elements
    if (list.empty() == true) {
        cout << "empty stack! can not display" << endl;
        return;
    }
    cout << "Stack elements: " << list << endl;
}