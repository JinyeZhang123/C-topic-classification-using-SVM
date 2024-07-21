template<typename T> void print(vector<T> v, string tag="") {
	if (!tag.empty()) cout << tag << ": ";
	for (T e : v) cout << e << ' ';
	cout << endl;
}