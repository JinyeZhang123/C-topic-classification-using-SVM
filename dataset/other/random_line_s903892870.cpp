            dp[i] = dp[i - D] + abs(x[i] - x[i - D]) + abs(y[i]- y[i - D]);
