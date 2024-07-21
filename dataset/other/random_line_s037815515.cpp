        for(int j=1;j<n;j++)C[i][j]=(C[i-1][j-1]+C[i-1][j])%p;
