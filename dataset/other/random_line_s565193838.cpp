				dp[k+a[i][j]] = max ( dp[k+a[i][j]] , dp[k]+a[i^1][j]-a[i][j] );
