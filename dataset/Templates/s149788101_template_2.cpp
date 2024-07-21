template <class Weight>
vector<Weight> bellman_ford(int s, const graph<Weight>& G, const Weight inf) {
	int n = G.size();
	vector<Weight> dist(n, inf);
	dist[s] = 0;
	bool upd;
	for (int i = 0; i < n; i++) {
		upd = false;
		for (int v = 0; v < n; v++) {
			for (auto& e : G[v]) if (dist[v] != inf && dist[e.to] > dist[v] + e.cost) {
				dist[e.to] = dist[v] + e.cost;
				upd = true;
			}