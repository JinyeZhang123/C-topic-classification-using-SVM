  for(int i=0; i<m; ++i) y[i]=1+lower_bound(py[p[i]-1].begin(),py[p[i]-1].end(),y[i])-py[p[i]-1].begin();
