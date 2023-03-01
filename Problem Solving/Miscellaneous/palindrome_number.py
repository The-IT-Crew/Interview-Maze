# Problem Link: https://leetcode.com/problems/palindrome-number/description/
# Problem Statement: Given an integer x, return true if x is a palindrome, and false otherwise.
# -121 is not a palindrome number

# Approach:
# negetive numbers are not palindrome
# calculate reverse of the number and compare with the original number

class Solution:
    def isPalindrome(self, x: int) -> bool:
        rev_x = 0                           # variable to hold reverse of x
        if x < 0:                           # number is negetive
            return False
        else:                               # calculate reverse of the number
            temp = x
            while temp != 0:
                rev_x = (rev_x * 10) + (temp % 10)
                temp = int(temp/10)
        return x == rev_x

