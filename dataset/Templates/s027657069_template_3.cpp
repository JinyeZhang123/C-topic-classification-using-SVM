template <typename W> auto bellman_ford(const G &graph,int s,W inf){
	int n=graph.size(),update;
	vector<W> dist(n,inf);dist[s]=0;

	rep(loop,n){
		update=false;
		rep(v,n) if(dist[v]!=inf) for(auto &e:graph[v]){
			if(chmin(dist[e.to],dist[v]+e.cost))
				update=true;
		}