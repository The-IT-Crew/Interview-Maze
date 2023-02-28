# Problem Link: https://leetcode.com/problems/reverse-integer/description/
# Problem Statement: Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside
# the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.
# Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

class Solution:
    def reverse(self, x: int) -> int:
        rev = str(x)[::-1]
        
        # trim leading 0's
        rev = rev.lstrip("0")

        if len(rev) != 0:
        
            # move negative symbol to the 0'th index
            if rev[-1] == '-':
                rev = '-'+rev[:-1]
        
            # chacking the range
            rev = int(rev)
            if rev >= (-2**31) and rev <= ((2**31)-1):
                return rev
        
        return 0
        
