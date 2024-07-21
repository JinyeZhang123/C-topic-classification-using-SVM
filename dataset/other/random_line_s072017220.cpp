        dp[i+1][w] = std::max(dp[i][w-weight[i]] + value[i], dp[i][w]);
