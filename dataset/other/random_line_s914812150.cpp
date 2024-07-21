ll f(int l,int r,ll a,ll b){if(l>r)return 0;ll R=1e18;for(int m=l;m<=r;m++)R=min(R,f(l,m-1,a,a+b)+f(m+1,r,a+b,b)+A[m]*(a+b));return R;}
