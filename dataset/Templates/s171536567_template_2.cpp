template <typename C>
void add_edge(vector<vector<C>>& G, int s, int t, C c) {
	G[s][t] = min(G[s][t], c);
}