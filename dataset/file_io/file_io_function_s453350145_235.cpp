int main()
{
	//ifstream cin("input.txt");
	int n,m,c;
	cin>>n>>m>>c;
	ll sum, count = 0,x;

	vi b(m);
	rep(i,0,m-1)
		cin>>b[i];

	rep(i,0,n-1){
		sum = 0;	
		rep(j,0, m -1)
			{
				cin>>x;
				sum += x*b[j];
			}