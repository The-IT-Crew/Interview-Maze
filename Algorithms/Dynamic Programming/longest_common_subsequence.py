# LONGEST COMMON SUBSEQUENCE
# Problem Link: https://leetcode.com/problems/longest-common-subsequence/description/
# Problem Statement: Given two strings of characters. You have to find the longest common substring,
# keeping the order as same as the input strings.

# Examples: 
# Str1 = "abdacadbecb"
# Str2 = "edacb"
# Output = 4

def longest_common_subsequence(str1, str2):
    dp = [[0 for _ in range(len(str1)+1)] for _ in range(len(str2)+1)]
     
    for i in range(1,len(str2)+1):
        for j in range(1,len(str1)+1):
            if str2[i-1] == str1[j-1]:
                dp[i][j] = dp[i-1][j-1] + 1
            else:
                dp[i][j] = max(dp[i][j-1], dp[i-1][j])

    # TODO: print the longest common subsequence

    for a in dp:
        print(a)
    return dp[-1][-1]

# test
if __name__ == "__main__":
    str1 = "abdacadbecb"
    str2 = "edacb"
    print(longest_common_subsequence(str1, str2))
