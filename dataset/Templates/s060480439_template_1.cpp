template<class T>
struct Edge{
	int from,to;
	T cost;
	Edge(int to,T cost) : to(to),cost(cost){}