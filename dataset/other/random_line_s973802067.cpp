        rep(j,20001) dp2[cnt/2][j]=dp2[cnt/2-1][max(0ll,j-now)]|dp2[cnt/2-1][min(20000ll,j+now)];
