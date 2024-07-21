template <typename M>
class segment_tree {
	using T1 = typename M::T1;
	using T2 = typename M::T2;
	const int h, n;
	vector<M> data;
	void push(int node) {
		data[node].push(data[node << 1], data[(node << 1) | 1]);
	}