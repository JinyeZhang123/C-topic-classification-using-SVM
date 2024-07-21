template<int V>
struct MaxFlow {
	using T = double;
	const T INF = 1<<28;

	struct Edge {
		int to,rev;
		T cap;
	}