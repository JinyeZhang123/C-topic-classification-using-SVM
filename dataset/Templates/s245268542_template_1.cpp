template <typename T>
class LazySegmentTree {
	const int n;
	const T id;
	vector<T> data, data2;
	int size(int n) {
		int res = 1;
		while (res < n) res <<= 1;
		return res;
	}