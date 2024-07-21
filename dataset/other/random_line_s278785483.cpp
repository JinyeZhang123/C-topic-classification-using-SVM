        if(s[0] <= i && s[1] > s[0]) dp[i] = max(dp[i], s[1] + dp[i - s[0]]);
