        dp[n] = min(dp[n], dfs(n / 3 + 1) + b + d * (3 - n % 3)); 
