template< typename T >
struct Edge {
	int from,to;
	T cost;

	Edge(int to,T cost):from(-1),to(to),cost(cost) {}