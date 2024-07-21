template <typename T>
struct HLD {
	vector<vector<pair<int, T>>> g;
	int n;
	vector<int> subsz, depth, parent;
	vector<vector<T>> chain_edge;
	vector<vector<int>> chain_node;
	map<int, int> chain_top, chain_id, id_in_chain;

	/* constructor */
	HLD(vector<vector<pair<int, T>>>& g) {
		this->g = g; n = g.size();
		parent.resize(g.size());
		subsz.resize(g.size());
		depth.resize(g.size());
	}