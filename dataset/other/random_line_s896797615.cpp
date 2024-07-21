                dp[i][j + 1] = min(dp[i][j + 1], dp[i][j] + (s[i][j] == s[i][j + 1] || s[i][j + 1] == '.' ? 0 : 1));
