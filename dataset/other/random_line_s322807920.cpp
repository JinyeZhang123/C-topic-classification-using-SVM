			dp[j][i - j + 1] = max(dp[j][i - j + 1], dp[j][i - j] + a[i].first * (((ll)n-i+j-1) - a[i].second));
