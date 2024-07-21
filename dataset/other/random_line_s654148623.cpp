    for(i=n-2;i;--i) sum=inc(sum,f[i+3]),f[i]=inc(inc(inc(f[i+1],1ll*(n-1)*(n-1)%P),sum),i+1);
