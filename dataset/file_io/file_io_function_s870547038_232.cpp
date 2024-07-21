int main()
{
	//ifstream cin("input.txt");
	ll n;
	cin>>n;
	int c = 1;
	while(n > 4 || n == 3)
	{
		c++;
		if(n%2 == 0)
			n = n/2;
		else
			n = 3*n + 1;
	}