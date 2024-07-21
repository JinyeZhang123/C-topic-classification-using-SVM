int main()
{
	int Q,N,n,b,w;
	string nm;
	//ifstream cin("A.txt");

	while(cin >> Q >> N, Q||N)
	{
		vector<era> data;
		while(Q--)
		{
			cin >> nm >> b >> w;
			data.push_back(era(nm,b,w));
		}