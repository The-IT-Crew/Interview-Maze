# Arrays

[Home](./index.md) > Arrays

<br>

## Topics

| # | Topic Name | Video | Article | Code |
|-|-|-|-|-|
| 1 | Array, and memory allocation | [cs dojo](https://www.youtube.com/watch?v=pmN9ExDf3yQ) | [simplilearn](https://www.simplilearn.com/tutorials/data-structure-tutorial/arrays-in-data-structure) | [`c++`](https://github.com/The-IT-Crew/Interview-Maze/blob/main/Data%20Structures/Arrays/array.cpp) |
| 2 | Window sliding technique | [byte by byte](https://youtu.be/GcW4mgmgSbw) | [geeksforgeeks](https://www.geeksforgeeks.org/window-sliding-technique/) | -- |

<br>

## Questions

1. > Rotate an array with linear time complexity without using any additional space. `#easy` [code](https://github.com/The-IT-Crew/Interview-Maze/blob/main/Problem%20Solving/arrays/array_rotation.cpp)

2. > Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array that adds to a given number S. In case of multiple subarrays, return the subarray which comes first on moving from left to right. (asked by- Amazon, Facebook) `#hard` [code](https://github.com/The-IT-Crew/Interview-Maze/blob/main/Problem%20Solving/arrays/continuous_subarray.cpp)

3. > Implement an algorithm to determine if a string has all unique characters. What if you can not use additional data structures? (asked by- Accolite) `#easy` [code](https://github.com/The-IT-Crew/Interview-Maze/blob/main/Problem%20Solving/arrays/duplicate_elements.cpp)

4. > Given two strings, write a method to decide if one is a permutation of the other. (A permutation is a rearrangement of letters) `#medium` [code](https://github.com/The-IT-Crew/Interview-Maze/blob/main/Problem%20Solving/arrays/permutation_string.cpp)

5. > Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element. (asked by- Adobe, Accolite) `#medium` [code](https://github.com/The-IT-Crew/Interview-Maze/blob/main/Problem%20Solving/arrays/missing_elements.cpp)

6. > Write a method to replace all spaces in a string with ‘%20’. You may assume that the string has sufficient space at the end to hold the additional characters and that you are given the “true” length. (use character array) #medium
```
Example -
I/P: 	“Mr John Smith”, 13
O/P: 	“Mr%20John%20Smith”
```

7. > Given a string, write a function to check if it is a permutation of a palindrome—[A palindrome is a word or phrase with the same forwards and backward. A permutation is a rearrangement of letters. The palindrome does not need to be limited to just dictionary words.] `#medium`
```
Example -
I/P:	tact coa
O/P:	True (permutations: “taco cat”, “atco cta”, etc)
```

8. > Three types of edits can be performed on strings: insert a character, remove a character, or replace a character. Given two strings, write a function to check if they are one edit (or zero edits) away. `#medium`
```
Example -
pale, ple	-> true
pales, pale	-> true
pale, bale	-> true
pale, bake	-> false
```

9. > Implement a method to perform basic string comparison using the counts of repeated characters. If the compressed string would not become smaller than the original string, your method should return the original string. You can assume that the string has only uppercase and lowercase letters (a-z). `#medium`
```
Example -
I/P:	aabcccccaaa
O/P:	a2b1c5a3
```

10. > Given an image represented by the N ⤫ N matrix, each pixel in the image is 4 bytes. Write a function to rotate the image by 90 degrees. Can you do this in place? `#easy`


11. > Write an algorithm such that if an element in an M ⤫ N matrix is 0, its entire row and column are set to 0. `#easy`

12. > Assume you have a method ‘isSubstring’ that checks if one word is a substring of another. Given two strings, S1 and S2, write code to check if S2 is a rotation of S1 using only one call to ‘isSubstring’. `#medium`

13. > Given an array of A of N elements. Find the majority element in the array in linear time using constant space. A majority element in an array A of size N is an element that appears more than N/2 times in the array. (asked by google) `#medium`

14. > Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)). `#hard`
```
Example-
I/P:    [1,2], [3]
O/P:	2.00000 (median value of [1,2,3] is 2)
```

15. > Write a program to draw fibonacci series up to a given number N. `#easy`


<br>
<br>

----
[🏠 Home](./index.md) | 
[⬅️ previous](./complexity_analysis.md) | 
[➡️ Next](./linked_list.md)
