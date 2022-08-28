// Given a string, find the length of the smallest window that contains every distinct character.
// Characters may appear more than once in the window. For example, given "jiujitsu",
// you should return 5, corresponding to the final five letters.

// apporach:
// 1. create a 26 element array replicate all alphabet position in the string
// 2. whenever a character found, update the array with its index int the string
// 3. check if the window size is greater then global window.
// 3.1. if yes, then update the index.
// 4. return the global size of the window.

#include <iostream>
using namespace std;

int distinct_window (string & str) {        // time complexity: O(n), space complexity: O(1)
    int arr[26], gstart, gend, lstart, lend;
    lstart = lend = gstart = gend = 0;
    for (int i=0; i<26; i++) {              // initialize the indexes with -1, time: O(n)
        arr[i] = -1;
    }
    for (int i=0; i<str.size(); i++) {      // time: O(n)
        if (arr[int(str[i]) - 97] != -1) {  // value is already encountered
            if (lstart < arr[int(str[i]) - 97] + 1)
                lstart = arr[int(str[i]) - 97] + 1;
        }
        arr[int(str[i]) - 97] = i;
        lend = i;                           // update the index
        if ((gend - gstart) < (lend - lstart)) {
            gstart = lstart;
            gend = lend;
        }
    }
    cout << gstart+1 << " to " << gend+1 << endl;
    return gend - gstart + 1;
}

int main () {                               // driving code
    string str = "jiujitsu";
    cout << distinct_window(str) << endl;
    return 0;
}