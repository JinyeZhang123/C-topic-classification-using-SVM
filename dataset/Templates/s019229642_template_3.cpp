template<typename T>
struct LazySegTree {
	vector<T> node, lazy;
	vector<bool> done;
	int n;
	T init_val;
	
	LazySegTree(int _n, T init_val) : init_val(init_val) {
		n = 1;
		while (n < _n) n *= 2;
		node.resize(n * 2 - 1, init_val);
		lazy.resize(n * 2 - 1);
		done.resize(n * 2 - 1, true);
	}