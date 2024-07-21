int main()
{
	//ifstream cin("input.txt");
	
	int n, m,si,ci;
	cin>>n>>m;
	unordered_map <int,int> num;
	rep(i,0,m-1)
	{
		cin>>si>>ci;
		if(num.find(si) != num.end() && num[si] != ci)
		{
			cout<<-1;
			return 0;
		}