template <typename T>
class LazySegmentTree {
	using func_t = function<T(T, T)>;
	const int n;
	const T id1, id2;
	func_t merge;
	func_t change;
	vector<T> data, lazy;
	int size(int n) {
		int res = 1;
		while (res < n) res <<= 1;
		return res;
	}