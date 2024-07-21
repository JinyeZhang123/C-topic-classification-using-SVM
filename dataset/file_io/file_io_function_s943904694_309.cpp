int main(int argc, char const *argv[])
{
	//ifstream cin("input.txt");
	int k;
	cin>>k;
	ll sum =0;
	rep(i, 1,k)
		rep(j,1,k)
			rep(l, 1,k)
				sum += gcd(gcd(i,j), l);

	cout<<sum;
}