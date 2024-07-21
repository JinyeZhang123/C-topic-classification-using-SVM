template< typename G >
class DoublingLowestCommonAncestor {
public:
	const G &g;
	vector< int > depth;//depth[v]=根からvまでの距離
	const int LOG;
	vector< vector< int > > table;

	DoublingLowestCommonAncestor(const G &g) : g(g), depth(g.size()), LOG(32 - __builtin_clz(g.size())) {
		table.assign(LOG, vector< int >(g.size(), -1));
	}