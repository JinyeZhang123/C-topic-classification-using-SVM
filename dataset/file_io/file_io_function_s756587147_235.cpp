int main()
{
	//ifstream cin("input.txt");
	ll n;
	cin>>n;
	string s;
	double d,sum = 0;
	std::setprecision(5);
	rep(i,1,n)
	{
		cin>>d>>s;
		if(s.compare("BTC") == 0)
			d *= 380000.0;
		sum += d;
	}