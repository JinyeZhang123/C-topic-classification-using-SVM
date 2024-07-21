int main()
{
	//ifstream cin("input.txt");
	ll a,b, k;
	cin>>a>>b>>k;
	vi divs;
	int m = min(a,b);
	rep(i, 1, m)
		if(a%i == 0 && b%i == 0)
			divs.push_back(i);
	cout<<divs[divs.size() - k];
	
}