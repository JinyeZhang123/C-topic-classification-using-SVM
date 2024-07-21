int main() {
	
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	//ifstream cin (".in");
	//ofstream cout (".out")
	
	ll a;
	double b;
	cin >> a >> b;
	double c=b*100;
	cout << a*ll(c+0.5)/100 << '\n';
	
	return 0;
}