int main()
{
//	freopen("in.txt", "r", stdin);
	//ios::sync_with_stdio(false); cin.tie(0);

	//cout<<brute(17, 7, 22, 23)<<endl;
	//cout<<solve(17, 7, 22, 23)<<endl;
	///cout<<solve(8, 10, 0, 17)<<endl;
	//return 0;

	//ofstream ss("in.txt");

/*	FOR (a, 1, 20)
	{
		FOR (b, 1, 20)
		{
			FOR (l, 0, a+b)
			{
				FOR (r, l, a+b)
				{
					cout<<a<<' '<<b<<' '<<l<<' '<<r<<": "<<endl;
					//ss<<a<<' '<<b<<' '<<l<<' '<<r<<": "<<endl;
					string s = solve(a, b, l, r);
					string t = brute(a, b, l, r);
					cout<<t<<endl<<s<<endl;
					if (s != t)
					{
						cout<<"!! "<<endl;
						throw -1;
					}