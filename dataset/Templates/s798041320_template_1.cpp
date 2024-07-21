template<class T>
struct augEdge {
	T from, to;
	int cost;
	bool operator<(augEdge e) { return cost < e.cost; }