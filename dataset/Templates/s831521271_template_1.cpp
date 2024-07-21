template <typename M>
class LazySegmentTree {
	using T1 = typename M::t1;
	using T2 = typename M::t2;
	const int h, n;
	vector<T1> data;
	vector<T2> lazy;
	void push(int node) {
		if (lazy[node] == M::id2()) return;
		if (node < n) {
			lazy[node * 2] = M::op3(lazy[node * 2], lazy[node]);
			lazy[node * 2 + 1] = M::op3(lazy[node * 2 + 1], lazy[node]);
		}