                dp[L][R] = max(a[L] - dp[L+1][R], a[R] - dp[L][R-1]);
