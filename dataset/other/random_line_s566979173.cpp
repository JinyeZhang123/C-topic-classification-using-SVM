		for(int k=1;k<i;k++)f[i][j]=Mod(f[i][j]+1ll*f[k][j]*s[i-k][j+1]%P*C[i-2][k-1]%P);
