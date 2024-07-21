template<typename T>
void outp(vector<T>v) {
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i];
		if (i != v.size() - 1) { cout << " "; }