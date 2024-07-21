	for(int i=n/2+1;i<=n;i++)ans=(ans-C(n,i)*z[n-i+1]%p)%p;cout<<(ans+p)%p;
