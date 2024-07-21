	for(int ch=1;ch<=C;++ch)for(int t=1;t<MAX_N;++t) used[ch][t] += used[ch][t-1];
