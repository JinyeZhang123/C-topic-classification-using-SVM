		if (r[i]<n-1 && s[r[i]+1]=='1') chmax(dp[r[i]+2], dp[i] + r[i]-i);
