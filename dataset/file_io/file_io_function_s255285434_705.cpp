int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	// ifstream fin ("sound.in");
	// ofstream fout("sound.out");
	
	
	ll n;
	cin >> n;
	for(int i =2;i<=n;i++){
		ll u,v;
		cin >> u >> v;
		adj[u].pb(v);
		adj[v].pb(u);
	}