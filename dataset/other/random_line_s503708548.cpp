			if(i & (1<<j)) dp[i][0] += min(abs(x[j]), abs(y[j])) * p[j];
