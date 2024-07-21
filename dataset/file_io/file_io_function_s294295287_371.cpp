int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	/*ifstream cin("input.txt");
	ofstream cout("output.txt");*/
	cin >> n;
	vector<int> a(n + 1, 0);
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	int ini = 1;
	/*if (a[1] == 1)
	{
		cout << -1;
		return 0;
	}