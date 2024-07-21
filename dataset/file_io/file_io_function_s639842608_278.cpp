int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	#ifdef ARTHUR_LOCAL
		ifstream cin("input.txt");
	#endif

	string s;
	int k;

	cin>>s>>k;

	k=min(k,300);

	int n = len(s);
	int zi=0;

	int initial_ones = 0;
	int ind=n-1;

	while(ind>=0 && s[ind]=='1')
	{
		ind--;
		initial_ones++;
	}