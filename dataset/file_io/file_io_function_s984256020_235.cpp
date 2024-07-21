int main()
{
	//ifstream cin("input.txt");
	ll n,m,a,b;
	cin>>n>>m;
	
	vector<pair<ll, ll>> nums(n);
	rep(i,0, n-1){
		cin>>a>>b;
		nums[i] = make_pair(a, b);
	}