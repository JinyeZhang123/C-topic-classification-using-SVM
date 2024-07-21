        if(!((bit >> next) & 1)) dp[bit | (1 << next)][next] = min(dp[bit | (1 << next)][next], dp[bit][last] + edge[last][next]);
