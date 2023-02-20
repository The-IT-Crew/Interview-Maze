# COIN CHANGE PROBLEM
# Problem Link:
# Problem Statement:
# Examples:

def coin_change(coins, amount):
    dp = [[amount+1 for _ in range(amount+1)] for _ in range(len(coins)+1)]
    for i in range(1,len(coins)+1):
        dp[i][0] = 0

    for i in range(1,len(coins)+1):
        for j in range(1,amount+1):
            if j < coins[i-1]:
                dp[i][j] = dp[i-1][j]
            else:
                dp[i][j] = min(dp[i-1][j], dp[i][j-coins[i-1]]+1)

    return dp[-1][-1]

# testing
if __name__ == "__main__":
    coins = [1,2,5]
    amount = 11
    print(coin_change(coins, amount))
