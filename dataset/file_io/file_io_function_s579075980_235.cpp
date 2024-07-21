int main(int argc, char const *argv[])
{
	//ifstream cin("input.txt");
	int n;
	cin>>n;
	ll sum = 0;
	rep(i,1,n)
	{

		if(i%3 != 0 && i%5 != 0)
			sum+=i;

	}