template< typename T >
T prim(WeightedGraph<T> &G) {
	using P=pair<T,int>;

	T res=0;
	vector<bool> visited((int)G.size(),false);
	priority_queue< P,vector<P>,greater<P> > Q;
	Q.emplace(0,0);
	while(!Q.empty()) {
		P p=Q.top();Q.pop();
		int v=p.second;
		if(visited[v]) continue;
		visited[v]=true;
		res+=p.first;
		for(auto e:G[v]) Q.emplace(e.cost,e.to);
	}