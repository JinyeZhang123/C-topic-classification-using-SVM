template<typename ISTREAM>
void readGraphListAsMatrix(const size_t n, ISTREAM& cin, vector< vector<int> >& graphMatrix) {
	graphMatrix = vector< vector<int> >(n, vector<int>(n, 0));
	for (size_t i = 0; i != n; ++i) {
		size_t u;
		size_t k;
		cin >> u;
		cin>> k;
		for (size_t j = 0; j != k; ++j) {
			size_t v;
			cin >> v;
			graphMatrix.at(u - 1).at(v - 1) = 1;
		}