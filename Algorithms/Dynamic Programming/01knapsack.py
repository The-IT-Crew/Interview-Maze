# 01 knapsack
# Find the maximum profit

def knapsack(weights, profits, capacity, total_items):
    dp = [[0 for _ in range(capacity+1)] for _ in range(total_items+1)]

    for i in range(1,total_items+1):
        for j in range(1,capacity+1):
            if j >= weights[i-1]:
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-weights[i-1]]+profits[i-1])
            else:
                dp[i][j] = dp[i-1][j]

    for a in dp:
        print(a)

    # TODO: print the items included in knapsack

    return dp[-1][-1]

# testing
if __name__ == "__main__":
    item_weights = [10,8,4,9,5]
    item_profits = [4,5,8,4,7]
    n = 5
    c = 20
    print(knapsack(item_weights, item_profits,c,n))
