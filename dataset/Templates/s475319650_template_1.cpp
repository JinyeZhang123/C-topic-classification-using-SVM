template<typename T>
struct sparsetable {

	vector<vector<T>> table;
	vector<int> logtable;
	vector<int> a;
	int n;

	// 渡す配列, サイズ
	sparsetable(const vector<T> a, int siz) : n(siz), a(a) {
		logtable.assign(n + 1, 0);
		for (int i = 2; i <= n; ++i)logtable[i] = logtable[i >> 1] + 1;
		table.assign(n, vector<T>(logtable[n] + 1, 0));
	}