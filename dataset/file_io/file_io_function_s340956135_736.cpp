int main()
{
	//ifstream cin("input.txt");
	cin>>N>>A>>B>>C;
	l = vi(N);
	rep(i,0,N-1)
		cin>>l[i];

	cout<<dfs(0,0,0,0);
	
}