template<typename T> void print(vector<vector<T>> v, string tag="") {
	if (!tag.empty()) cout << tag << ": " << endl;
	for (auto ev : v) {
		for (auto e : ev) cout << e << ' ';
		cout << endl;
	}