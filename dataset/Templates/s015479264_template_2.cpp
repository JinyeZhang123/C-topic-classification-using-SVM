template< typename T >
bool bellman_ford(Edges<T> &edges,int s,vector<T> &dist) {
	const auto INIT=numeric_limits<T>::max();
	int n=(int)dist.size();
	dist.assign(n,INIT);
	dist[s]=0;
	bool negative_cycle=false;
	for(int i=0;i<n;i++) {
		for(auto e:edges) {
			if(dist[e.from]==INIT) continue;
			if(dist[e.to]<=dist[e.from]+e.cost) continue;
			dist[e.to]=dist[e.from]+e.cost;
			if(i==n-1) {
				dist[e.to]=-INIT;
				negative_cycle=true;
			}