template <typename T>
struct SegTree {
	T init_val;
	int n;
	vector<T> dat;
	
	SegTree(int _n, T init_val) : init_val(init_val) {
		n = 1;
		while (n < _n) n *= 2;
		dat.resize(n * 2 - 1, init_val);
	}