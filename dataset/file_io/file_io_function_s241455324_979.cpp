int main() {
	
	//ifstream cin("input.txt");
	//ofstream cout("output.txt");
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	ll z = 26;
	ll k; cin>>k; 
	string s; cin>>s;
	ll n = k + s.length();
	pre();
	ll ans = powerm(z,n);
	for(ll i=0;i<s.length();i++)
	{
		ll gg = (C(n,i)*powerm(z-1,n-i))%M;
		ans = (( ans - gg )%M + M)%M;
	}