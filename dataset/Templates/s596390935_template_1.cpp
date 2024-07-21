template <typename M>
class LazySegmentTree {
	using T = typename M::type;
	const int n;
	vector<M> data;
	int size(int n) {
		int res = 1;
		while (res < n) res <<= 1;
		return res;
	}