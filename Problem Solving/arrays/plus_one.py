# Problem link: https://leetcode.com/problems/plus-one/
# Problem statement: You are given a large integer represented as an integer 
# array digits, where each digits[i] is the ith digit of the integer. The digits 
# are ordered from most significant to least significant in left-to-right order. 
# The large integer does not contain any leading 0's.

# Approach:
# traverse the entire list in reverse order
#   add 1 to each index
#   if current index's value > 9 after addition, then
#       current index's value = 0
#   else
#       return digits
# add 1 in the 0'th index and return digits

# Sample Output:

# Input: digits = [1,2,3]
# Output: [1,2,4]

# Input: digits = [9,9]
# Output: [1,0,0]

class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        for i in range(len(digits)-1, -1, -1):
            digits[i] += 1
            if digits[i] > 9:
                digits[i] = 0
            else:
                return digits
        digits.insert(0,1)
        return digits


