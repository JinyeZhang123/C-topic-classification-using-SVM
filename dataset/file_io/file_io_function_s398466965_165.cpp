int main() {
	// your code goes here
	//ifstream cin("input.txt");
	//ofstream cout("output.txt");
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	
	int n; cin>>n;
	vector < pair <ll,ll> > v;
	for(int i=0;i<n;i++)
	{
		ll p,q; cin>>p>>q;
		v.pb(mp(p,q));
	}