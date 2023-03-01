/* Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

Edge cases to ask the interviewer -
- If the array conatains only one element then what will be tha missing element?
[in that case the missing element will be the next value]
- Is there only one missing element or more than one? [one]
*/

#include <iostream>
using namespace std;

int missing_element (int arr[], int size) {     // time complexity = O(n), space complexity = O(1)
    int sum = arr[0];
    int min = arr[0];
    for (int i=1; i<size-1; i++){               // time = n
        sum += arr[i];
        if (min > arr[i]) min = arr[i];
    }
    int total_sum = 0;
    for (int i=0; i<size; i++){                 // time = n
        total_sum += min;
        min += 1;
    }
    return total_sum - sum;
}

int main(){
    int arr[] = {1,2,3,5};
    int size = 5;
    cout << "[" << missing_element(arr, size) << "]" << endl;
    return 0;
}