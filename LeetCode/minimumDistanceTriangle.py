def minimumTotal(triangle):
        dp = [[x for x in y] for y in triangle]
        
        for i in range(1, len(dp)):
            dp[i][0] +=  dp[i-1][0]
            dp[i][len(dp[i]) - 1] += dp[i - 1][len(dp[i]) - 2]
            
        for i in range(2, len(dp)):
            for j in range(1, len(dp[i]) - 1):
                dp[i][j] += min(dp[i-1][j], dp[i-1][j-1])
        
        return min(dp[-1])

print(minimumTotal( [[2],[3,4],[6,5,7],[4,1,8,3]]))