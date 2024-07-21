template <class Weight>
struct edge {
	int to;
	Weight cost;
	edge(int t, Weight c) : to(t), cost(c) {}