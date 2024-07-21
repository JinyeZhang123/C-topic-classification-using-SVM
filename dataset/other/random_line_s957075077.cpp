    if (i+1 == j) dp[i][j] = dp[i-1][j-1] + a[i].first * (a[i].second - j + 1);
