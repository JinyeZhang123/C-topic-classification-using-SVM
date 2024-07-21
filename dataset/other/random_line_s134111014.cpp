    cp[i][M]=(dp[i][M]+dp[i-1][M]*(max(M,N/M)-min(N/M,M)))%MOD;
