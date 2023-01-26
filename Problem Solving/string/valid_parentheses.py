# Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
# An input string is valid if:
# Open brackets must be closed by the same type of brackets.
# Open brackets must be closed in the correct order.
# Every close bracket has a corresponding open bracket of the same type.

# Approach:
# iterate through the entire string from 0'th index
# whenever get ({[, push them into a stack
# whenever get a )}] pop its matching opening brace from the stack
# if the order is not maintained, return false
# if after traversing, the stack is not empty, return true
# if after traversing, the stack is empty return true

# Sample outputs

# Example 1:
# Input: s = "()"
# Output: true

# Example 2:
# Input: s = "()[]{}"
# Output: true

# Example 3: 
# Input: s = "(]"
# Output: false

class Solution:
    def isValid(self, s: str) -> bool:
        visited = list()                # empty stack
        open_to_close = dict({          # mapping from a open brace to its corrosponding closing brace
            '(':')',
            '{':'}',
            '[':']'})
        for a in s:                     # iterating through the entire string
            if len(visited) == 0 or a in ['(','{','[']:
                visited.append(a)
            elif open_to_close.get(visited[-1]) == a:
                visited.pop()
            else:
                return False
        return len(visited) == 0        # if empty return True, else False


