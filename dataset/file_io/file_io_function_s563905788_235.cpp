int main(int argc, char const *argv[])
{
	//ifstream cin("input.txt");
	ll x;
	cin>>x;
	ll bal = 100;
	ll count = 0;
	while(x > bal)
	{
		bal += bal/100;
		count ++; 
	}