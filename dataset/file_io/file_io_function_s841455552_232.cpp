int main()
{
	//ifstream cin("input.txt");
	ll n,m;
	cin>>n>>m;
	vi x(m);

	if(m == 1 || n >= m)
	{
		cout<<0;
		return 0;
	}