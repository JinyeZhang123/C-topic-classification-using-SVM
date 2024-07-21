template<typename ISTREAM>
void readGraphList(ISTREAM& cin, vector< vector<int> >& graphList) {
	size_t n;
	cin >> n;
	graphList = vector< vector<int> >(n);
	for (size_t i = 0; i != n; ++i) {
		size_t u;
		size_t k;
		cin >> u;
		cin >> k;
		vector<int>& v = graphList.at(u - 1);
		v.resize(k);
		for (size_t j = 0; j != k; ++j) {
			cin >> v.at(j);
			v.at(j)--;
		}