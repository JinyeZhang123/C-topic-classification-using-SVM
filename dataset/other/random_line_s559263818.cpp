		for(int j=1;j<=M;j++)m[i][j]=min(m[i][j-1],m[i-1][j-1]+dist[i-1]*climate[j-1]);
