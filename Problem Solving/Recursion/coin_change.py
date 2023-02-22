# Coin change using recursion

# PROBLEM STATEMENT: Given a list of coins with infinite amount, and a target amount.
# We have to return the minimum number of coins needed to make the amount.

# Approach:
# 1. Iterate through the items
# 2. Base case: we don't have any items or we don't have any target, then return 0
# 3. If item[i] > target, then dont take the item and look for rest of the items for optimal solution
# 4. Else: Min(take the item + cost, don't take the item)

import sys
def solve(items, target):
    
    # base case
    if len(items) == 0:
        return sys.maxsize

    # base case
    if target == 0:
        return 0
    
    # recursion
    # don't take the item
    # check for rest of the items for optimal solution
    if items[0] > target:
        return solve(items[1:], target)

    # take minimum cost between
    # cost of current item, rest of the items
    else:
        A = solve(items[1:],target)
        B = 1+solve(items[1:],target-items[0])
        C = 1+solve(items, target-items[0])
        
        return min(A,B,C)
        
# test
if __name__ == "__main__":
    coins = [1,2,5,7]
    amount = 14
    print(f"Minimum number of coins needed is: {solve(coins, amount)}")
