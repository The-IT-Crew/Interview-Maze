# Problem link: https://leetcode.com/problems/remove-element/description/
# Problem Statement: Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The relative order of the elements may be changed. Return the index of first part of the array (i.e. arr[1 ot k] where k <= length of the array), where 'val' is not present.

# Approach:
# Traverse the whole array using one pointer (i.e. ptr1)
# Set another pointer ptr2 = ptr1
# slide ptr2 to 1 index right until it found a mismatch and ptr2 < len(nums)
# swap values of ptr1 and ptr2
# Return ptr1

# Sample outputs:
# Input: nums = [0,1,2,2,3,0,4,2], val = 2
# Output: 5, nums = [0,1,4,0,3,_,_,_]
# Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4. Note that the five elements can be returned in any order. It does not matter what you leave beyond the returned k (hence they are underscores).

class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        ptr1 = 0
        while ptr1 < len(nums):
            if nums[ptr1] == val:
                ptr2 = ptr1
                # move ptr2 until it found a mismatch
                while ptr2 < len(nums) and nums[ptr2] == val:
                    ptr2 += 1
                # swap value of ptr1 and ptr2
                if ptr2 < len(nums):
                    nums[ptr1], nums[ptr2] = nums[ptr2], nums[ptr1]
                else:
                    break
            ptr1 += 1

        return ptr1



