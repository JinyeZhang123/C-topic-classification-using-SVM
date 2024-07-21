template <typename T> void print_vec(const vector<T>& v) {
	for(int i = 0; i < SZ(v); i++) {
		if (i) cout << " ";
		cout << v[i];
	}