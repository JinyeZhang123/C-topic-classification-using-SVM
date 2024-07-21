        dp[l][r][cnt] = max(rec(l + 1, r, cnt), rec(l, r - 1, cnt));
