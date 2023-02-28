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
        
