        for(int j=0;j<=x;j++)ans=(ans+1ll*(j&1?p-1:1)*C[x][j]%p*C[n-2*j+k-1][k-1])%p;
