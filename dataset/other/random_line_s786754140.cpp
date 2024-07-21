            if(j == g[k][l].to)dp[j][g[k][l].to] = dp[g[k][l].to][j] = min(dp[j][g[k][l].to], dp[j][k]);
