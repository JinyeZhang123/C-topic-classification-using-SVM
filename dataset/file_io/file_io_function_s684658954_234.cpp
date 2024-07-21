int main(int argc, char const *argv[])
{
	//ifstream cin("input.txt");
	ll n,k;
	cin>>k>>n;
	
	ll a1,a2;
	cin>>a1;
	ll mx = 0;
	ll s = a1;
	rep(i, 0, n-2)
	{
		cin>>a2;
		mx = max(mx, a2 - a1);
		a1 = a2;
	}