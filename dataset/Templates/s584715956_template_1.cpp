template<typename T>
void execute(T& cin) {
	size_t n;
	cin >> n;
	vector< vector<int> > grapthMatrix(n, vector<int>(n,0));
	for (size_t i = 0; i != n; ++i) {
		size_t u;
		size_t k;
		cin >> u >> k;
		for (size_t j = 0; j != k; ++j){
			size_t v;
			cin >> v;
			grapthMatrix.at(u - 1).at(v - 1) = 1;
		}