template <typename W> W dinic(G &graph,int s,int t,W inf){
	const int n=graph.size();
	vector<int> level(n),iter(n);

	auto bfs=[&](int s,int t){
		fill(_all(level),-1);
		queue<int> q;
		level[s]=0,q.push(s);
		while(!q.empty()){
			int v=q.front();q.pop();
			for(auto &e:graph[v])
				if(e.cap>0 && level[e.to]<0)
					level[e.to]=level[v]+1,q.push(e.to);
		}