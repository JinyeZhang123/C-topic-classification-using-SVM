int main(int argc, char const *argv[])
{
	//ifstream cin("input.txt");
	int n,m;
	cin>>n>>m;
	ll sum =0;
	ll x;
	rep(i, 0 ,m-1)
	{
		cin>>x;
		sum += x;
	}