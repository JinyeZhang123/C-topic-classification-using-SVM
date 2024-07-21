    for(int i = 0; i + 1 < S.length(); i++) dp[i][i + 1][S[i] != S[i + 1]] = 2;
