template< typename T>
void print(const vector<T> &data) {
	if (data.empty()) return;
	for (int i = 0; i < data.size(); ++i) {
		cout << data[i];
		if (i != data.size() - 1) cout << " ";
		else cout << endl;
	}