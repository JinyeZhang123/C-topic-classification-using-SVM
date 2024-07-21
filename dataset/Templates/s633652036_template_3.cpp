template<typename T>
struct SegTree {
	T init_val;
	int n;
	vector<T> all, part;
	
	SegTree(int _n, T init_val) : init_val(init_val) {
		n = 1;
		while (n < _n) n *= 2;
		all.resize(n * 2 - 1, init_val);
		part.resize(n * 2 - 1, init_val);
	}