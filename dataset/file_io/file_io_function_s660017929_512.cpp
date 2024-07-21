int main() {
	
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	//ofstream cout ("fileName.out");
	//ifstream cin ("fileName.in");
	
	int N,K;
	cin>>N>>K;
	vl pos, neg;
	
	for(int i=0; i<N; ++i) {
		ll n;
		cin>>n;
		if(n>=0) pos.pb(n);
		else neg.pb(n);
	}