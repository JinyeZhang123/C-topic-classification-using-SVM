template<typename T, int VALUE_N>
class SegmentTree {
	const T INIT_VALUE;
	const function<T(T, T)> mergeFunc;
	const function<T(T, T)> updateFunc;
	const int LEAF_N = 1 << (int)(ceil(log2(VALUE_N)));
	const int NODES_N = LEAF_N * 2 - 1;
	vector<T> nodes;
	inline int leafIndex(int i) { return LEAF_N - 1 + i; }