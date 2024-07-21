void Hoge(){
#ifdef _WIN32
	istream &cin = ifstream("input.txt");
#endif

	int n;
	string str1;

	cin >> n;
	rep(i, n) cin >> A[i];

	L.at(0) = A.at(0);
	int length = 1;
	for (int i = 1; i < n; i++){
		*lower_bound(L.begin(), L.end(), A[i]) = A[i];
	}