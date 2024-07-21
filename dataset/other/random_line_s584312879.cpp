	for(int i = n-1; i > 0; i--) d[i] = d[i+1] + ((d[i+1] + 1) * 2 > d[i] ? d[i] : 0);
