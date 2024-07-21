int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	//ifstream cin("01-03.txt");

	cin >> n >> m;

	for(int i=0;i<n;i++)
	{
		cin >> t;
		cnt[t]++;
		//cnt2[t%m]++;
	}