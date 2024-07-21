							if(j<p) d[now][i][j][k]=max(d[now][i][j][k],min(d[pre][i][j][p-1],d[pre][i][p][k]));
