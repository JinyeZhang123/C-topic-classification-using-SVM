int main() {
	
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	//ofstream cout ("fileName.txt");
	//ifstream cin ("fileName.txt");
	
	map<int,ll> m;
	int N, Q;
	ll sum=0;
	cin >> N;
	
	vl A(N);
	
	for(int i=0; i<N; ++i) cin >> A[i], sum+=A[i], ++m[A[i]];
	
	cin >> Q;
	
	for(int i=0; i<Q; ++i) {
		
		ll B, C;
		cin >> B >> C;
		
		sum-=m[B]*B;
		sum+=m[B]*C;
		m[C]+=m[B];
		m[B]=0;
		
		//for(auto x: m) cout<<x.f<<" - "<<x.s<<"\n";
		
		cout<<sum<<"\n";
	}