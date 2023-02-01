# Problem link: https://leetcode.com/problems/plus-one/
# Problem statement: You are given a large integer represented as an integer 
# array digits, where each digits[i] is the ith digit of the integer. The digits 
# are ordered from most significant to least significant in left-to-right order. 
# The large integer does not contain any leading 0's.

# Sample Output:
# --------------
# Input: digits = [1,2,3]
# Output: [1,2,4]

# Input: digits = [9,9]
# Output: [1,0,0]

class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        s = str()
        for a in digits:
            s += str(a)
        b = int(s) + 1
        temp = []
        while b != 0:
            temp.append(b%10)
            b //= 10
        return reversed(temp)
