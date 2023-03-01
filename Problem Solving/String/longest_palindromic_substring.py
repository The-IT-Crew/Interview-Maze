# LONGEST PALINDROMIC SUBSTRING
# Problem Link: https://leetcode.com/problems/longest-palindromic-substring/description/
# Problem Statement: Given a string s, return the longest palindromic substring in s.

# Example 1:
# I/P = "babad" O/P = "bab"
# Explanation: "aba" is also a valid answer.

class Solution:
    def longestPalindrome(self, s: str) -> str:
        start,end = 0,0
        for i in range(len(s)):

            # odd palindrome
            j = 0
            while i-j >= 0 and i+j < len(s):
                if s[i-j] == s[i+j]:
                    if (end - start) < (2*j)+1:
                        start = i-j
                        end = i+j
                else:
                    break
                j += 1

            # print(end, start)
            # even palindrome
            j = 0
            while i-j >= 0 and i+1+j < len(s):
                if s[i-j] == s[i+1+j]:
                    if (end - start) < (2*j)+2:
                        start = i-j
                        end = i+1+j
                else:
                    break
                j += 1
            # print(end, start)

        return s[start: end+1]
