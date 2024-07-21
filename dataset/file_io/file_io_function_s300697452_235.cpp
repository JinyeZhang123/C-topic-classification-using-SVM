int main(int argc, char const *argv[])
{
	//ifstream cin("input.txt");
	string s;
	unordered_map <string, bool>cnt;

	int n;
	cin>>n;
	rep(i, 0, n-1)
	{
		cin>>s;
		cnt[s] = true;
	}