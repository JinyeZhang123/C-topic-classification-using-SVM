template<typename ISTREAM>
void readWeightedGraphMatrix(ISTREAM& cin, vector< vector<int> >& weightedGraphMatrix) {
	size_t n;
	cin >> n;
	int weight;
	weightedGraphMatrix = vector< vector<int> >(n, vector<int>(n));
	for (size_t i = 0; i != n; ++i) {
		for (size_t j = 0; j != n; ++j) {
			cin >> weight;
			weightedGraphMatrix.at(i).at(j) = weight != -1 ? weight : INF;
		}