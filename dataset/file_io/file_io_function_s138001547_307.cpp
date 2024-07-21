int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	#ifdef ARTHUR_LOCAL
		ifstream cin("input.txt");
	#endif

	int n;
	cin>>n;

	ll a1,a2;
	cin>>a1>>a2;

	ll x=0LL;

	for(int i=0; i<n-2; i++)
	{
		ll a;
		cin>>a;
		x^=a;
	}