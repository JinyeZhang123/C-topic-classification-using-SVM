int main()
{
	//ifstream ifs("2009-ho-data/data/2009-ho-t1-in2");
	int n;
	while( cin >> n && n)
	{
		int			l, ans = 0;
		string		s;
		vector<ll>	I, O;

		cin >> l >> s;

		rep(i,l) I.push_back(s[i] == 'I' ? i < 2 ? s[i] == 'I' ? 1 : 0 : I[i-2]+1 : 0);
		rep(i,l) O.push_back(s[i] == 'O' ? i < 2 ? s[i] == 'O' ? 1 : 0 : O[i-2]+1 : 0);

		rep(i,l-2*n) if(O[i+2*n-1] >= n && I[i+2*n] >= n+1) ans++;
		
		cout << ans << endl;
	}