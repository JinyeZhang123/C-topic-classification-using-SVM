	f[0]=1;for(int i=1;i<=s2;i++)f[i]=1+f[i%__builtin_popcount(i)];
