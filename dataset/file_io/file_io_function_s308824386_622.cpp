int main(int argc, char const *argv[])
{
	//ifstream cin("input.txt");
	int n,m,q;
	cin>>n>>m>>q;
	rep(i, 0, q - 1)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		a--;
		b--;
		request.push_back({a,b,c,d}