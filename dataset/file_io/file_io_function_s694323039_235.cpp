int main()
{
	//ifstream cin("input.txt");
	int n, q;
	string s;
	cin>>n>>q;
	cin>>s;
	
	vi cnt(n, 0);
	rep(i, 1, n- 1)
	{
		if(s[i-1] == 'A' && s[i] == 'C')
			cnt[i] = 1 + cnt[i-1];
		else
			cnt[i] = cnt[i-1];
	}