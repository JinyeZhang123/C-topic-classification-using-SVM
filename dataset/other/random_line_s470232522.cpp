      if (i>=color[x][1]) dp[pos+1][i] |= dp[pos][i-color[x][1]];
