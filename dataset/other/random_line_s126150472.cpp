        if(j>=a[i])dpa[i+1][j]=max(dpa[i+1][j],dpa[i][j-a[i]]+b[i]);
