int main()
{
	//ifstream cin("input.txt");
	ll n,k;
	cin>>n>>k;
	vi h(n);

	rep(i,0,n-1)
		cin>>h[i];
	
	sort(h.begin(), h.end());
	ll min_k = INT_MAX;
	rep(i, k - 1, n-1)
		min_k = min(min_k, h[i] - h[i - k + 1]);
	
	cout<<min_k;

}