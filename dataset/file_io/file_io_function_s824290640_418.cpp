int main()
{
	//ifstream cin("input.txt");
	ll n;
	cin>>n;
	vi h(n);

	rep(i,0,n-1)
		cin>>h[i];
	int count = 0;
	while(*max_element(h.begin(), h.end()) != 0)
	{
		count += findContinuousIntervals(h,n);
		rep(i, 0, n-1)
			if(h[i] >0)
				h[i]--;
	}