int main() {
	
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	//ifstream cin (".in");
	//ofstream cout (".out")
	
	ll n;
	cin >> n;
	ll ans=0;
	
	for(ll i=2; n>1 && i*i<=n; ++i) {
		int temp=0;
		while(n%i==0) ++temp, n/=i;
		for(int j=1; ; ++j) {
			if(temp>=j) ++ans, temp-=j;
			else break;
		}