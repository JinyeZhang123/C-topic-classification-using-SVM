	for(int i=2;i<x;i++) if(q[i]) for(int j=2;j<=x/i;j++) q[i*j] = false;
