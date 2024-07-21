int main()
{
	//ifstream cin("input.txt");
	ll n,k;
	cin>>n>>k;
	ll hi = k;
	int count = 1;
	while(n >= hi)
	{
		hi *=k;
		count ++;
	}