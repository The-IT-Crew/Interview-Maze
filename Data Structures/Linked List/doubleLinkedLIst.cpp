#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;
    node * prev;
    ~node(){                // desctactor       
        delete this;
    }
};

int main(){
    node * n1, * n2, * n3;
    n1 = new node();        // creating objext in heap memory
    n2 = new node();
    n3 = new node();

    n1->data = 10;
    n2->data = 20;
    n3->data = 30;

    n1->next = n2;          // linking node with each other
    n1->prev = NULL;
    n2->next = n3;
    n2->prev = n1;
    n3->next = NULL;
    n3->prev = n2;

    node * ptr = n1;        // display
    while (ptr != NULL){
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;

    return 0;
}