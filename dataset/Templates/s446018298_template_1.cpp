template <typename T >
void print_vec_1d(vector<T> x, string name) {
	cout << name << endl;
	cout << "[ ";
	for (int i=0;i<x.size();i++) {
		cout << x[i];
		if (i != x.size()-1) cout << ", ";
		else cout << " ]" << endl;
	}