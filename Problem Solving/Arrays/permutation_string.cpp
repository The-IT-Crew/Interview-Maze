/* Problem: Given two strings, write a method to decide if one is a permutation of the other.

edge cases to ask the interviewer -
- what does permutaion means? 
- is the string ascii string or unicode string? [ascii]
*/

#include <iostream>
#include <string>
using namespace std;

bool is_permutation(string s1, string s2){      // time complexity = O(n), space complexity = O(1)
    int sl1[26], sl2[26];                       // space = constant
    for (int i=0; i<26; i++){                   // time = constant
        sl1[i] = 0;
        sl2[i] = 0;
    }
    if (s1.length() == s2.length()){
        for (int i=0; i<s1.length(); i++){      // time = n
            sl1[ int(s1[i]) - 97 ] += 1;
            sl2[ int(s2[i]) - 97 ] += 1;
        }
    } else return false;
    for (int i=0; i<26; i++){                   // time = constant
        if (sl1[i] != sl2[i]) return false;
    }
    return true;
}

int main(){
    string str1 = "god";
    string str2 = "dog";
    (is_permutation(str1, str2) == true) ? cout << "true" : cout << "false";
    cout << endl;
    return 0;
}