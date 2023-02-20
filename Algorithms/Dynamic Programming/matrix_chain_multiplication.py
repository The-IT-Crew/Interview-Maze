# Matrix chain multiplication

def parenthesization(s,i,j):
    if i == j:
        print(f"A{i+1}",end="")
    else:
        print("(",end="")
        parenthesization(s,i,s[i][j]-1)
        parenthesization(s,s[i][j],j)
        print(")",end="")

def mcm(p,n):
    dp = [[0 for _ in range(n)] for _ in range(n)]
    s = [[0 for _ in range(n)] for _ in range(n)]
    
    # setting values in tables
    for a in range(n):
        for i in range(n-a):
            j = i+a
            if i != j:
                temp = dict()
                for k in range(i,j):
                    val = dp[i][k]+dp[k+1][j]+(p[i]*p[j+1]*p[k+1])
                    temp.update({val:k})
                dp[i][j] = sorted(temp)[0]
                s[i][j] = temp.get(dp[i][j])+1

    # print the squence
    parenthesization(s,0,n-1)
    print()

# test
if __name__ == "__main__":
    matrices = [30,35,15,5,10,20,25]
    mcm(matrices,6)
