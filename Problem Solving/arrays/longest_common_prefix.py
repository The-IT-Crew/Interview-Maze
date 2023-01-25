# Problem link:
# Problem statement:
# Write a function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string ""

# Approach:
# if strs contains only one elemet, then return strs[0]
# iterate through each string in strs and
# if there is a match, then
#	append the string with the result
# else
#	return the result

import sys

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs) == 1:
            return strs[0]
        
        res = ""
        smallest_len = int(sys.maxsize)
        for i in range(len(strs)):
            if len(strs[i]) < smallest_len:
                smallest_len = len(strs[i])
        
        for i in range(smallest_len):
            flag = False
            for j in range(1, len(strs)):
                if strs[j][i] == strs[j-1][i]:
                    flag = True
                else:
                    return res
            if flag == True:
                res += strs[0][i]
        return res


# Sample Outputs

# Case1
# Input: strs = ["flower","flow","flight"]
# Output: "fl"

# Case2
# Input: strs = ["dog","racecar","car"]
# Output: ""


