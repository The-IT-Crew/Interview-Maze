# Check a given string is palindrome or not
def Palindrome(s):
    # Base case
    if len(s) <= 1:
        return True
        
    # Recursion
    if s[0] == s[-1]:
        return Palindrome(s[1:-1])
    return False
