int main()
{
	//ifstream cin("input.txt");
	string s;
	cin>>s;
	ll n = s.length();

	int i = 0, cnt = 0;
	int stk = 0, zstk = 0;
	while(i < n - 1)
	{
		if((s[i] == '1' && s[i+1] == '0' )||(s[i] == '0' && s[i+1] == '1'))
		{
			cnt +=1;
			i += 2;
		}