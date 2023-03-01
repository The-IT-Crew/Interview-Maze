/*  ARRAY ROTATION
************************************************************************
    Given an array 'arr' and an 'index'. You have to return the reverse
    the elements of the array upto the given index.
***********************************************************************/

#include <iostream>
using namespace std;

// swap by reference
void swap(int & a, int & b){    // time complexity = O(1), space = constant
    int temp = a;
    a = b;
    b = temp;
}

// rotate the array
void rotate(int * arr, int size){       // time complexity = O(n)
    int half = size/2;                  // time = constant, space = constant
    for (int i=0; i<half; i++){         // time = n
        swap(arr[i], arr[size-i-1]);    // time = constant
    }
}

// driving code
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};     // array initialization
    rotate(arr, 10);                        // roate the array
    for (int i=0; i<10; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
    return 0;
}