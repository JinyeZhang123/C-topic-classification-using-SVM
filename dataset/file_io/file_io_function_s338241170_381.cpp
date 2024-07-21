signed main()
{
	//ifstream cin("Ain.txt");
	//ofstream cout("Aout.txt");

	int a, d, n;

	do{
		cin >> a >> d >> n;

		if (!(a&&d&&n))break;

		a -= d;

		while (n){
			a += d;
			if (func(a))n--;
		}