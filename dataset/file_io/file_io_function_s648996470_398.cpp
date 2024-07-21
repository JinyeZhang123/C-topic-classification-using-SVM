void solve(){
#ifdef _WIN32
	istream &cin = ifstream("input.txt");
#endif
	int n;
	cin >> n;
	memo.resize(n + 2);
	memo[0] = memo[1] = 1;
	
	cout << fib(n) << endl;
}