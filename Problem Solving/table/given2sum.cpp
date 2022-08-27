// Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
// For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
// Bonus: Can you do this in one pass?

#include <iostream>
#include <unordered_set>
using namespace std;

void solve (int arr[], int size, int k) {           // time complexity: O(n), space complexity: O(n)
    unordered_set<int> set;                         // space: O(n)
    for (int i=0; i<size; i++) {                    // time O(n)
        if (set.empty()) {                          // if set is empty
            set.insert(arr[i]);
        } else {                                    // if set is not empty
            auto search = set.find(k - arr[i]);     // time: O(1)
            if (search == set.end()){               // element not found
                set.insert(arr[i]);
            } else {                                // element found
                cout << "[" << arr[i] << "," << k-arr[i] << "]" << endl;
            }
        }
    }
}

int main () {                                       // driving code
    int arr[] = {10, 15, 3, 7};
    solve(arr, 4, 17);
    return 0;
}