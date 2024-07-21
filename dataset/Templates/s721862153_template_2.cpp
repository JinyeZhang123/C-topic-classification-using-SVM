template<typename T>
void execute(T& cin) {
	vector< vector<int> > graphList;
	readGraphList(cin, graphList);
	widthSearch(graphList);
}