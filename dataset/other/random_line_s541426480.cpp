		f[i]=-dif(x[i],x[i-1])+min(min(qry(0,x[i-1])+x[i-1],qry(1,N+1-x[i-1])-x[i-1]),0);
