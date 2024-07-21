template<class T>
void printVector(vector<T> v, string between, int mode) {
	if (mode == 0) {
		for (int i = 0, k = v.size(); i < k; ++i) {
			cout << v[i];
			if (i < k - 1)
				cout << between;
		}