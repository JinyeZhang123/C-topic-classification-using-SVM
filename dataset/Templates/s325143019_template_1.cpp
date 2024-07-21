template <typename M>
class LazySegmentTree {
	using T1 = typename M::type1;
	using T2 = typename M::type2;
	const int n;
	vector<T1> data;
	vector<T2> lazy;
	int size(int n) {
		int res = 1;
		while (res < n) res <<= 1;
		return res;
	}