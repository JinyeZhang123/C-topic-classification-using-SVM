    dp[i + 1][0] = max({dp[i][0] + a.at(i), dp[i][1] - a.at(i)});
