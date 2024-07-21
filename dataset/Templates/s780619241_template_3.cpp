template <typename M>
struct SegmentTree {
	int n;
	using T = typename M::t;
	function<T(T, T)> f = M::f;
	T id = M::id;
	std::vector<T> nodes;

	SegmentTree(std::vector<T> v) {
		int sz = (int)v.size();
		n = 1; while (n < sz) n *= 2;
		nodes.resize(2 * n - 1, id);
		for (int i = 0; i < sz; i++) nodes[i + n - 1] = v[i];
		for (int i = n - 2; i >= 0; i--) nodes[i] = f(op1(nodes[i * 2 + 1], nodes[i * 2 + 2]));
	}