        if (s1[n - 1] == s2[m - 1]) solve[n][m] = min(tmp, dp(n - 1, m - 1));
