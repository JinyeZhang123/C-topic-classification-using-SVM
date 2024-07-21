template<typename ISTREAM>
void readWeightedGraphMatrix(ISTREAM& cin, vector< vector<int> >& weightedGraphMatrix) {
	size_t n;
	cin >> n;
	int u, k, v, c;
	weightedGraphMatrix = vector< vector<int> >(n, vector<int>(n, -1));
	for (size_t i = 0; i != n; ++i) {
		cin >> u >> k;
		for (size_t j = 0; j != k; ++j) {
			cin >> v >> c;
			weightedGraphMatrix.at(u).at(v) = c;
		}