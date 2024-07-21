template<typename T>
void execute(T& cin) {
	size_t n;
	cin >> n;
	vector< vector<int> > graphMatrix;
	readGraphListAsMatrix(n, cin, graphMatrix);
	stack<size_t> visitedNodeIDs;
	vector<vector<int>::iterator> searchBeginPos;
	searchBeginPos.reserve(n);
	for (auto& v : graphMatrix)searchBeginPos.push_back(v.begin());
	int time = 0;
	vector<pair<int, int>> timeStamp(n,make_pair(0,0));//pair<初回訪問時刻, 完了時刻>
	for (int i = 0; i != n; ++i) {
		pair<int, int>& dp = timeStamp.at(i);
		if (dp.first != 0)continue;
		visitedNodeIDs.push(i);
		dp.first = ++time;
		while (!visitedNodeIDs.empty()) {
			const int nodeID_1 = visitedNodeIDs.top();
			vector<int>& neighbourNodeList = graphMatrix.at(nodeID_1);
			vector<int>::iterator& searchStart = searchBeginPos.at(nodeID_1);
			while (true) {
				searchStart = find(searchStart, neighbourNodeList.end(),1);
				if (searchStart == neighbourNodeList.end()) {
					timeStamp.at(nodeID_1).second = time + 1;
					visitedNodeIDs.pop();
					break;
				}