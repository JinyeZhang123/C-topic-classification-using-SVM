				if(j+value[i] >= 0 && j+value[i] <= 20) dp[j+value[i]][i] += dp[j][i-1];
