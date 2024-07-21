template <typename W> auto Warshall_floyd(const auto &graph,W inf){
	vector<vector<W>> dist=graph;
	const int n=dist.size();
	rep(k,n)rep(i,n)rep(j,n){
		if(dist[i][k]!=inf && dist[k][j]!=inf)  
			chmin(dist[i][j],dist[i][k]+dist[k][j]);
	}