template <typename T>
class SparseTable {
	const int n, h;
	vector<vector<T>> t;
public:
	SparseTable(const vector<T>& b)
		: n(b.size()), h(31 - __builtin_clz(n)), t(h + 1, vector<T>(b.size())) {
		t[0] = b;
		for (int i = 0; i < h; i++)
			for (int k = 0; k + (1 << i) < n; k++)
				t[i + 1][k] = min(t[i][k], t[i][k + (1 << i)]);
	}