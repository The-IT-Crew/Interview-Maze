# Link: https://leetcode.com/problems/two-sum/description/
# Problem statement:
# Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
# Input: nums = [2,7,11,15], target = 9
# Output: [0,1]

# approach:
# store the visited indexes in a hash table
# iterate through the entire table and search for (target - present_value) is present in the hash table

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        visited = dict()                # empty hashtable
        for i in range(len(nums)):      # iterate through the entire table
            if len(visited) != 0 and visited.get(target-nums[i]) != None:
                return [visited.get(target-nums[i]), i]
            else:
                visited.update({nums[i]:i})
        return []                       # for pair not present

