            if(j-a[i]>=0)dp1[i+1][j]=max(dp1[i+1][j],dp1[i][j-a[i]]+b[i]);
