template <typename T>
struct segtree {
	int n;
	vector<T> tree;
	
	segtree(int n_) {
		for (n = 1; n < n_; n *= 2) {
			
		}