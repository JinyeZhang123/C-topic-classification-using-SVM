template<int size>
class UnionFind{
	int par[size];
	int rank[size];
public:
	UnionFind(){ reset(); }