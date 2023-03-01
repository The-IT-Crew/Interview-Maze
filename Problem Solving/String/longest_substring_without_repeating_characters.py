# LENGTH OF LONGEST SUBSTRING
# Problem Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
# Problem Statement: Given a string s, find the length of the longes substring without repeating characters.

# Approach: sliding window
# 1. Make two pointers p1 and p2 initially pointing to the 1st index.
# 2. Iterate the string and check if current character is present in the previous string[p2:p1]
# 3. If string is present, then until match fount move p2 1 index right
# 4. Else move p1 1 index right.
# 5. Return the maximum value of count = p1 - p2

def lengthOfLongestSubstring(self, s: str) -> int:
    p1,p2,count = 0,0,0
    while p2 < len(s):
        if s[p2] in s[p1:p2]:
            while s[p1] != s[p2]:
                p1 += 1
            p1 += 1
        else:
            p2 += 1
        if count < p2-p1:
            count = p2-p1
  return count

# test
if __name__ == "__main__":
    print(f'Length of longest substring is: {lengthOfLongestSubstring("abcabcbb")}')
