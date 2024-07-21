      if(itr != mp[S[i]].end()) (dp[i+1][*itr+1] += dp[i][j]) %= mod;
