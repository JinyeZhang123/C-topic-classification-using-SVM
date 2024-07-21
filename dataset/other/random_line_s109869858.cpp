            if (v[i].f >= dp[i][k-1]) dp[i+1][k] = min(dp[i+1][k], dp[i][k-1] + v[i].s);
