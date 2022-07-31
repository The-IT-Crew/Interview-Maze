#include <iostream>
using namespace std;

int main(){
    
    // array declaration
    int arr1[5];
    for (int i=0; i<5; i++) arr1[i] = i+1;

    // inline array declaration
    int arr2[] = {1,2,3,4,5};

    // pointer to array declaration
    int * arr3 = arr2;       // index 0 will be hold by the pointer variable

    // reference to an array
    // TODO

    return 0;
}