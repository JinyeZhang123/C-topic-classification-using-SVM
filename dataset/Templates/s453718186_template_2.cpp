template <class Weight>
vector<Weight> spfa(int s, const graph<Weight>& G, const Weight inf) {
	int n = G.size();
	vector<Weight> dist(n, inf);
	vector<bool> on(n);
	queue<int> q;
	dist[s] = 0;
	q.push(s);
	on[s] = true;
	while (!q.empty()) {
		auto v = q.front(); q.pop();
		on[v] = false;
		for (const auto& e : G[v]) if (dist[e.to] > dist[v] + e.cost) {
			dist[e.to] = dist[v] + e.cost;
			if (!on[e.to]) q.push(e.to), on[e.to] = true;
		}