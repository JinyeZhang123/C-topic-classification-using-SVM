template<typename T>
void execute(T& cin) {
	vector< vector<int> > graphList;
	readWeightedGraphMatrix(cin, graphList);
	printSPST(graphList);
}