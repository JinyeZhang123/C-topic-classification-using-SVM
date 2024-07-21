        return dp[n][m] = min(rec(n,m),rec(n-n/v[m]*v[m],m-1));
