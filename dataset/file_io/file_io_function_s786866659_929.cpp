int main()
{
	//ifstream cin("input.txt");
	//ifstream cin("test.in");
	//ofstream cout("test.out");

	int n;
	cin >> n;

	int k;

	REP(i, 1, 10000)
	{
		if(i*(i-1) == 2*n)
		{
			k = i;
			break;
		}