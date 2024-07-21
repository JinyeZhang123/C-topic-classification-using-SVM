template <typename T>
void print(vector<T> &x) {
	for(long i=0;i<x.size();++i) {
		if (i!=0) cout << " ";
		cout << x[i];
	}