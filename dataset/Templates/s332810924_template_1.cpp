template <typename T>
struct segtree_lazy {
	int n;
	vector<T> tree, lazy;
	T def = numeric_limits<T>::max(), none = -1;
	
	segtree_lazy(int n_) {
		for (n = 1; n < n_; n *= 2) {
			
		}