template<class T> struct SegTree {
	typedef size_t U;
	U n; T init;
	vector<T> d, s;
	SegTree(U _n, T init) : n(1), init(init) {
		while (n < _n) n <<= 1;
		d = vector<T>(2 * n - 1, init);
		s = vector<T>(2 * n - 1, 0);
	}