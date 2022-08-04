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
    node * n1, * n2;        // node initialization
    n1 = new node();
    n2 = new node();
    n1->data = 10;
    n2->data = 20;
    n1->link = n2;
    n2->link = NULL;

    // display
    node * ptr = n1;
    while (ptr != NULL){
        cout << ptr->data << " ";
        ptr = ptr->link;
    }
    cout << endl;

    return 0;
}