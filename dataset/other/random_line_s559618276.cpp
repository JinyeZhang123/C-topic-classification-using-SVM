	return dp[i][h] = a[i] * f(h - 1,  i + 1) + (1 - a[i]) * f(h,  i + 1);
