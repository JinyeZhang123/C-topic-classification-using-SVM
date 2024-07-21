template<int32 isUNDIRECTED=0>
class Graph{
	struct Edge{
		int32 u, v, id;
		int64 c;
		Edge(int32 u, int32 v, int64 c=0, int32 id=0):u(u), v(v), c(c), id(id){}