int32_t main(){
	ios_base :: sync_with_stdio(0); cin.tie(); cout.tie();
#ifdef LOCAL_DEFINE
	ifstream cin("input.in");
#endif

	cin >> n >> d;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		p[i]=i;
		f[i]=-d*i+a[i];
		g[i]=d*i+a[i];
	}