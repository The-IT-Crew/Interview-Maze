// Given an array of integers, find the first missing positive integer in linear time and constant space.
// In other words, find the lowest positive integer that does not exist in the array.
// The array can contain duplicates and negative numbers as well. For example, the input [3, 4, -1, 1]
// should give 2. The input [1, 2, 0] should give 3.


#include <iostream>
#include <unordered_set>

using namespace std;

int missing_element (int * arr, int size) {
	unordered_set <int> set;
	for (int i=0; i<size; i++) {
		if (arr[i] >= 0) {
			set.insert(arr[i]);
		}
	}
	int min, temp;
	min = temp = *set.begin();
	auto itr = set.begin();
	itr++;
	while (itr != set.end()) {
		if(*itr != temp+1){
			return temp+1;
		} else {
			temp = *itr;
		}
		itr++;
	}
	if (min-1 >= 0) return min-1;
	return temp+1;
}

int main() {
	int arr[] = {2,3,1};
	cout << "hello world" << endl;
	cout << missing_element(arr, 3) << endl;
	return 0;
}