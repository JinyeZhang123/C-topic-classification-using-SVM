template<class T>
struct SCC{
	T g;
	Graph G,rG,nG;
	vector<vector<int>> scc;
	vector<int> cmp,used,vs;

	int operator[](int i) const{ return cmp[i]; }