/* problem: Implement an algorithm to determine if a string has all unique characters.
What if you can not use additional data structures? 

edge cases to ask the interviewer -
- is it only contains alphabets or symbols? [a-z]
- is the string is ascii string or unicode string [ascii]
- what do it mean by additional data structures? [only array can be used]
*/

#include <iostream>
using namespace std;

bool has_duplicate(char str[]){         // time complexity = O(n), space complexity = O(1)
    bool alphabets[26];                 // alphabets only have 26 characters, space = constant
    for (int i=0; str[i]!='\0'; i++){
        int ch = int(str[i]) - 97;      // in ascii table 'a' value is 97
        if (alphabets[ch] != true) alphabets[ch] = true;    // if character is visited or not
        else return true;
    }
    return false;
}

int main(){
    char str[] = "hass";
    (has_duplicate(str)==0) ? cout<< "false" : cout << "true";
    cout<<endl;
    return 0;
}