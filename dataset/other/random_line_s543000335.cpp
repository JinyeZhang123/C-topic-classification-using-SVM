            if(i - a[j] >= 0) dp[i] |= !dp[i - a[j]];
