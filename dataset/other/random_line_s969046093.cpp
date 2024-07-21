		fx[j][i]=max(fx[j][i-1],fx[j+(1<<i-1)][i-1]),fn[j][i]=min(fn[j][i-1],fn[j+(1<<i-1)][i-1]);
