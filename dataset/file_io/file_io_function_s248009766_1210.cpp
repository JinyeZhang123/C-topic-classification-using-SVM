signed main() {
    //ifstream cin("E:\\acm dream\\in.in");
	//ofstream cout("E:\\acm dream\\out.out");
	FIO;
    #ifdef err
	double be = clock();
    #endif

    a[0]=1;
    _for(i,1,MAX<<1+1)a[i]=a[i-1]*i%MOD;
    inva[0]=1;
    inva[MAX<<1]=inv(a[MAX<<1]);
    _rfor(i,(MAX<<1)-1,0)inva[i]=inva[i+1]*(i+1)%MOD;
    ll n,m;cin>>n>>m;
    ll x,y;cin>>x>>y;
    ll ans=0;
    _for(i,y+1,m+1){
        ans+=C(n-x+i-2,i-1)*C(x+m-i-1,m-i)%MOD;
        ans%=MOD;
    }