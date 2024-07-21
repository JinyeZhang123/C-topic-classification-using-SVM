          dp[i] = max(dp[i], dp[i-num[A[j]]] + (char)(A[j] + '0'));
