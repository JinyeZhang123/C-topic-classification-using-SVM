            d[i][j] = ((d[i-1][j]*j+d[i][j-1]*i-d[i-1][j-1]*(i-1)*(j-1))%mod+mod)%mod;
