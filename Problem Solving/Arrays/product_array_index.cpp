// Given an array of integers, return a new array such that each element at index i of the new array
// is the product of all the numbers in the original array except the one at i.
// For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24].
// If our input was [3, 2, 1], the expected output would be [2, 3, 6].
// Follow-up: what if you can't use division?
 
// approach:
// 1. array 'left' and 'right' initially filled with 1 
// 2. 'left' array will hold the product of its previous indexes
// 3. 'right' array will hold the product of its next indexes
// 4. i'th index of the 'result' array is product of left[i-1] * right[i+1]
// 5. return 'result' array

#include <iostream>
using namespace std;

void solution (int * arr, int size) {       // time complexity: O(n), space complexity: O(2n)
    int left[size], right[size];
    for (int i=0; i<size; i++) {            // fill the array with 1
        left[i] = 1;
        right[i] = 1;
    }
    left[0] = arr[0];                       // left product
    for (int i=1; i<size; i++) {
        left[i] = left[i - 1] * arr[i];
    }
    right[size-1] = arr[size-1];            // right product
    for (int i=size-2; i>=0; i--) {
        right[i] = right[i + 1] * arr[i];
    }
    for (int i=0; i<size; i++) {            // product of array
        if(i != 0 && i != size-1) {
            cout << left[i-1] * right[i+1] << " ";
        } else if (i == 0) {
            cout << right[i+1] << " ";
        } else {
            cout << left[i-1] << " ";
        }
    }
    cout << endl;
}

int main () {                               // driving code
    int arr[] = {1,2,3,4};
    solution(arr, 4);
    return 0;
}