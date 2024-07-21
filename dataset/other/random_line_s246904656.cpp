        for(; t--; )dp[t + 1] = min(dp[t + 1], dp[t] * i.first + i.second);
