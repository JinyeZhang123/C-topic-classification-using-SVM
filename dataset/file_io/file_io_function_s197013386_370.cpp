int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	/*ifstream cin("input.txt");
	ofstream cout("output.txt");*/
	/*vector<ll> a;
	for(ll i=26; i<=1000000000000001; i*=26)
		a.push_back(i);*/
	cin >> n;
	string ans = "";
	while (n > 0)
	{
		--n;
		ans += (n % 26) + 'a';
		n /= 26;
	}