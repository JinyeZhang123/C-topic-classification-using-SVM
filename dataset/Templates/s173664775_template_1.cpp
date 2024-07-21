template<typename T>
void execute(T& cin) {
	int n;
	cin >> n;
	vector<Matrix> m(n);
	for (auto& matrix : m)cin >> matrix.row >> matrix.col;
	cout << getMinMCM(m) << endl;

}