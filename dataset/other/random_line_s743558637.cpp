	if(r-l<=1)return 0;pair<int,int>p1=make_pair(v1,v2);if(f[l][r].count(p1))return f[l][r][p1];LL &v=f[l][r][p1];v=INF;
