            dp[i+1][l+1] = max(dp[i+1][l+1],dp[i][l]+ll(p[i].second+1-(l+1))*p[i].first);
