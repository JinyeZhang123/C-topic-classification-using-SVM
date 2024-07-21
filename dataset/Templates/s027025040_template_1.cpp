template <typename T>
class SegmentTree {
	using func_t = function<T(T, T)>;
	const int n;
	const T id;
	func_t merge;
	vector<T> data;
	int size(int n) {
		int res;
		for (res = 1; res < n; res <<= 1);
		return res;
	}