int main(int argc, char const *argv[])
{
	//ifstream cin("input.txt");
	int n;
	cin>>n;
	vi g(n, 0);

	rep(i, 1, n-1)
	{
		int x;
		cin>>x;
		x--;
		g[x] ++;
	}