# Problem Link: https://leetcode.com/problems/coin-change/

# Problem Statement:
# Given an integer array coins representing coins of different denominations and
# an integer amount representing a total amount of money. Return the fewest number
# of coins that you need to make up that amount. If that amount of money cannot
# be made up by any combination of the coins, return -1. You may assume that you
# have an infinite number of each kind of coin.

# Example -
# Input: coins = [1,2,5], amount = 11
# Output: 3
# Explanation: 11 = 5 + 5 + 1

class Solution:
	def coinChange(self, coins, amount) -> int:
		
		# base case
		if amount == 0 and len(coins) == 0:
			return 0
		
		# Add the current coin + check for the remaining list for
		# optimal solution
		with_cost = 1 + self.coinChange(coins, amount - coins[0])
		
		# Discard the current coin -> check for the remaining list for
		# optimal solution
		without_cost = self.coinChange(coins[1:], amount)
		
		if coins[0] <= amount and with_cost < without_cost:
			return with_cost
		else:
			return self.coinChange(coins[1:], amount)
		return -1
		
		
# driving code
if __name__ == '__main__':
	print(Solution().coinChange([1,2],4))

