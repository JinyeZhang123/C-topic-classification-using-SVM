int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	/*ifstream cin("input.txt");
	ofstream cout("output.txt");*/
	cin >> s;
	ll cnt = 0, ans = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[s.size() - 1 - i] == 'B')
		{
			ans += i - cnt;
			// cout<<i<<" "<<ans<<"\n";
			++cnt;
		}