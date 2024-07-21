		while(j-1>i&&abs(2*(sum+a[j-1])-pf[n-1]+pf[i-1])<=prevv) sum+=a[--j],prevv=abs(2*sum-pf[n-1]+pf[i-1]);
