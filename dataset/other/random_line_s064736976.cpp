        dp[i+2] = min(dp[i]+abs(h[i+2]-h[i]), dp[i+1]+abs(h[i+2]-h[i+1]));
