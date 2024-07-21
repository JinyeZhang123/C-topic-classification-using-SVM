        chmax(dp[i+1][0], max(dp[i][0] + v[i], dp[i][1] - v[i]));
