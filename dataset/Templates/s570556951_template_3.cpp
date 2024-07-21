template<typename T>
struct RangeUpdateQuery {
	int n;
	vector<T>d;
	RangeUpdateQuery(int m) {
		for (n = 1; n < m; n <<= 1);
		d.assign(2 * n, INF);
	}