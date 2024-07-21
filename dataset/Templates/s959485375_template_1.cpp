template <typename C, const C inf>
vector<C> bellman_ford(const graph& G, int s) {
	int n = G.size();
	vector<C> d(n, inf);
	d[s] = C();
	bool update;
	for (int i = 0; i < n; i++) {
		update = false;
		for (auto& es : G) {
			for (auto e : es) {
				if (d[e.from] == inf || d[e.to] <= d[e.from] + e.cost) continue;
				d[e.to] = d[e.from] + e.cost;
				update = true;
			}