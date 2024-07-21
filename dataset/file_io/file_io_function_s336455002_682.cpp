int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	// ifstream fin ("sound.in");
	// ofstream fout("sound.out");
	string s;
	cin >> s;
	ll n = 1ll*s.size();
	string t;t+= '@';
	t+=s;
	s =t;
	if(s[1] == '0' || s[n] == '1'){
		return cout<<"-1\n",0;
	}