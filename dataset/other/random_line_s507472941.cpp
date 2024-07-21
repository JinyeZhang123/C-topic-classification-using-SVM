           dp[i][j+1]=(ll)max(dp[i][j+1],(ll)dp[i][j]+abs(n-j-1-arr[i+j].second) *arr[i+j  ].first);
