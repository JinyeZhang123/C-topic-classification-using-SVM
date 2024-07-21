int main()
{
	//ifstream in("test.txt");
	//cin.rdbuf(in.rdbuf());
	int n;
	cin >> n;
	vector<ll> a(n),b(n);
	for(int i = 0 ;i<n;i++)cin >> a[i];
	for(int i = 0 ;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			b[i]=a[i];
		}