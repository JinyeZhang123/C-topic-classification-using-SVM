template <typename M>
class lazy_segment_tree {
	using T1 = typename M::t1;
	using T2 = typename M::t2;
	const int n;
	vector<T1> data;
	vector<T2> lazy;
	int size(int n) {
		int res = 1;
		while (res < n) res <<= 1;
		return res;
	}