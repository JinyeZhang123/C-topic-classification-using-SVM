template <class T> class Graph2 {
public:
	static const T INF = numeric_limits<T>::max();
	int V, E; vector<vector<pair<int, T> > > G;
	Graph2() : V(0), E(0), G(vector<vector<pair<int, T> > >()) {}