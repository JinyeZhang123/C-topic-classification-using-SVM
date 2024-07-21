		if(i>1) sum[i][j][1]=sum[i][j-1][1]+sum[i-1][j][1]-sum[i-1][j-1][1]+(mp[i][j]&mp[i-1][j]);
