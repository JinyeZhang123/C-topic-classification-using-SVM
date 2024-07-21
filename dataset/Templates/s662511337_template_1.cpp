template <typename C, C inf>
class Bellman_Ford {
	struct edge {
		int from, to;
		C cost;
		edge(int _from, int _to, int _cost) : from(_from), to(_to), cost(_cost) {}