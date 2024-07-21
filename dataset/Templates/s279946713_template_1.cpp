template<class T>
struct Segtree {
	int n;
	vector<T> node;
	Segtree(int sz) {
		n = 1;
		while (n < sz) n *= 2;
		node.resize(2 * n - 1, INT_MAX); // UNITY
	}