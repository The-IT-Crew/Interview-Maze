// Given two single linked lists that intersects at some point, find the intersecting node.
// The lists are non cyclical. For example A = 3->7->8->10 and B = 99->1->8->10,
// return the node with value 8. In this example, assumes nodes with the same value are the exact same node objects.
// Do this in O(M+N) time, where M and N are the lengths of the lists, and in constant space.

// approach:
// 1. ptr1 and ptr2 pointing to the 1st node of the linked list A and B respectively
// 2. sum_A = sum of all nodes in linked list A
// 3. sum_B = sum of all nodes in linked list B
// 4. if (sum_A > sum_B)
// 4.1 then: move ptr1 to 1 node ahead and subtract the node value
// 4.2 else: move ptr2 to 1 node ahead and subtract the node value
// 5. If (sum_A == sum_B)
// 5.1 then: return node(ptr1++)

#include <iostream>
#include <forward_list>                     // single linked list
using namespace std;

int solution (forward_list <int> & a, forward_list <int> & b) {
    auto itr_a = a.begin();                 // iterator for list A
    auto itr_b = b.begin();                 // iterator for list B
    int sum_A = 0;
    int sum_B = 0;
    while (itr_a != a.end()) {              // time: O(M)
        sum_A += *itr_a;
        itr_a++;                            // iterate to the next pointer
    }
    while (itr_b != b.end()) {              // time: O(N)
        sum_B += *itr_b;
        itr_b++;                            // iterate to the next pointer
    }
    auto itr_aa = a.begin();                // iterator for list A
    auto itr_bb = b.begin();                // iterator for list B
    while (sum_A != sum_B) {                // time complexity: O(M+N)
        if (sum_A < sum_B) {
            sum_B -= *itr_bb;
            itr_bb++;
        } else {
            sum_A -= *itr_aa;
            itr_aa++;
        }
    }
    cout << endl;
    return int(*itr_aa++);
}

int main () {
    forward_list <int> listA {3, 7, 8, 10};
    forward_list <int> listB {99, 1, 8, 10};
    cout << solution(listA, listB) << endl;
    return 0;
}