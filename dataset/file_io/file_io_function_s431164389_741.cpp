int main() {
	
	//ifstream cin("input.txt");
	//ofstream cout("output.txt");
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	
	int n; ll m; cin>>n>>m;
    ll g = 1;
    vll a(n); bool ok=1;
    forn(i,n)
    {
        cin>>a[i];
        if(a[i]&1) ok=0;
        ll h = a[i]/2;
        if(g<0){ cout<<0; return 0; }