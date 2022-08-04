#include <iostream>
using namespace std;

// node of a linked list
class node{
    public:
    int data;
    node * link;
};

// driving code
int main(){
    node * n1, * n2, * n3;        // node initialization
    n1 = new node();
    n2 = new node();
    n3 = new node();
    n1->data = 10;
    n2->data = 20;
    n3->data = 30;
    n1->link = n2;
    n2->link = n3;
    n3->link = n1;

    // display
    node * ptr = n1;
    while (ptr != NULL){            // infinite loop
        cout << ptr->data << " ";
        ptr = ptr->link;
    }
    cout << endl;

    return 0;
}