int main() {
	int n, edgeCount;
	ifstream in("input.txt");
	cin >> n >> edgeCount;
    
	vector<vector<int>> c(n, vector<int>(n, 0));
	for (int a = 0; a < edgeCount; ++a) {
		int i, j;
		cin >> i >> j;
		cin >> c[i][j];
	}