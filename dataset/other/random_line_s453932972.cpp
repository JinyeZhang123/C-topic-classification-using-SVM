        if(dp[l + 1][r - 1] == width - 2 && abs(w[l] - w[r - 1]) <= 1)dp[l][r] = width;
