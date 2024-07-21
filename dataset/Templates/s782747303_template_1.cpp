template<typename T>
struct LazySegmentTree {
	const int INF = numeric_limits<int>::max();
	int n0;
	vector<T> node, lazy;

	LazySegmentTree(vector<T> &v) {
		int n = v.size();
		n0 = 1;
		while (n0 < n) n0 <<= 1;
		node.resize(2 * n0 - 1);
		lazy.assign(2 * n0 - 1, INF);
		for (int i = 0; i < n; i++) node[i + n0 - 1] = v[i] * pows[N - i - 1] % mod;
		for (int i = n0 - 2; i >= 0; i--) node[i] = node[i * 2 + 1] + node[i * 2 + 2];
	}