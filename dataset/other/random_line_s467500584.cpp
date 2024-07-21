		for(int j=1;j<=i;j++)s[i][j]=(s[i-1][j-1]+1ll*(j+1)*s[i-1][j]%m)%m;
