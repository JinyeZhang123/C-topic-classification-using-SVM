int main(int argc, char const *argv[])
{
	//ifstream cin("input.txt");
	ll n,a,b;
	cin>>n>>a>>b;
	
	ll q = n /(a+ b);
	n = n % (a + b);
	if(a >= n)
		cout<<q*a + n;
	else
		cout<<q*a + a;

}