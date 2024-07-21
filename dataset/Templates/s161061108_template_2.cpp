template<typename T>
void execute(T& cin) {
	size_t n;
	cin >> n;
	vector< vector<int> > graphMatrix;
	readGraphListAsMatrix(n, cin, graphMatrix);
	stack<int> visitedNodeIDs;
	int time = 0;
	vector<pair<int, int>> timeStamp(n,make_pair(0,0));//pair<初回訪問時刻, 完了時刻>
	vector<vector<int>::iterator> searchBeginPos; {
		searchBeginPos.reserve(n);
		for (auto& v : graphMatrix)searchBeginPos.push_back(v.begin());
	}