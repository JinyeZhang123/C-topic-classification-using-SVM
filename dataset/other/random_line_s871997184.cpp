    dp[l][r] = min(rec(l,r-1) - a[r-1], rec(l+1,r) - a[l]);
