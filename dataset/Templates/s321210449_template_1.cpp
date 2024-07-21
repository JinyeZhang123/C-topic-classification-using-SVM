template<class T>
struct SegTree {
	int n;
	vector<T> node;
	function<T(T, T)> f;
	T iniV;
	SegTree(vector<T> v, function<T(T, T)> f, T iniV): iniV(iniV), f(f) {
		int sz = v.size();
		n = 1; while (n < sz) n *= 2;
		node.resize(n * 2 - 1, iniV);
		for (int i = 0; i < sz; i++) node[i + n - 1] = v[i];
		for (int i = n - 2; i >= 0; i--) {
			node[i] = f(node[i * 2 + 1], node[i * 2 + 2]);
		}