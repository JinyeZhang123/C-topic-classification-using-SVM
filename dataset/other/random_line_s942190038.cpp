        dp[left][right] = max(dp[left][right], fall(left, mid) + fall(mid+1, right));
