template<typename T>
struct RangeAddQuery {
	int n;
	vector<T>d;
	RangeAddQuery(int m) {
		for (n = 1; n < m; n <<= 1);
		d.assign(2 * n, 0);
	}