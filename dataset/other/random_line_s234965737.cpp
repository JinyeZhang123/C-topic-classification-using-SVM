				dp[i][j] = max(dp[i][j], dp[i-1][min(j-w[d[i]], s[d[i]]-w[d[i]])] + v[d[i]]);
