# Problem link: https://leetcode.com/problems/roman-to-integer/description/
# Problem Statement:Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M. Given a roman numeral, convert it to an integer.

# Approach:
# Store the cost of each digit in a hashmap
# iterate through the string in reversed order
# if str[current_index] <= str[current_index-1], then
#	sum += str[current_index]
# else
#	sum -= str[current_index]
# return sum

class Solution:
    def romanToInt(self, s: str) -> int:
        symbol = {              # Represents the symbols and their values in decimal
            'I':1,
            'V':5,
            'X':10,
            'L':50,
            'C':100,
            'D':500,
            'M':1000}
        res = symbol.get(s[-1])				# holding the cost of last index
        for i in reversed(range(0,len(s)-1)):		
            if symbol.get(s[i]) >= symbol.get(s[i+1]):
                res = abs(res + symbol.get(s[i]))
            else:
                res = abs(res - symbol.get(s[i]))
        return res

