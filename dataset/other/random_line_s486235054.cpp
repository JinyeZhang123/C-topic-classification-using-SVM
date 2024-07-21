			if(k < 3 && l > 0) dp[i][j][k + 1][l - 1] |= dp[i - 1][j][k][l];
