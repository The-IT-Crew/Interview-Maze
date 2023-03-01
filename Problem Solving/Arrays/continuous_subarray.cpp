/* Given an unsorted array A of size N that contains only non-negative integers,
find a continuous sub-array that adds to a given number S. In case of multiple subarrays,
return the subarray which comes first on moving from left to right. 

edge cases to ask the interviewer -
- can duplicate elements presents in the array? [yes]
*/

#include <iostream>
using namespace std;

void continuous_subarray(int arr[], int size, int find){        // time complexity = O(n), space complexity = O(1)
    int p1, p2, sum = arr[0];
    p1 = p2 = 0;                                // points to index 0
    while (p1 < size || p2 < size){             // time = 2n
        if (sum <= find) {
            if (sum == find){
                cout << "[" << p1+1 << "," << p2+1 << "]" << endl;
                return;
            }
            p2 += 1;
            sum += arr[p2];
        } else {
            sum -= arr[p1];
            p1 += 1;
        }
    }
}

int main(){
    int arr[] = {1,5,2,3,7,8,4,6,9};
    int size = 9;
    int find = 12;
    continuous_subarray(arr, size, find);
    return 0;
}