					if (a[j][k]) dp[i|(1<<k)][k]=std::max(dp[i|(1<<k)][k],t+a[j][k]);
