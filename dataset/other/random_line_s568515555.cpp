        for (int j = 0;j < i+1;++j) dp[i+1][j] = max(dp[i+1][j],dp[i][j]+a[i].first*abs(n-1+j-i-a[i].second));
