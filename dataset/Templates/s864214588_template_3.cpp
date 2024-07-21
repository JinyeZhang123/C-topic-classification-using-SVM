template <typename W> auto dijkstra(const G &graph,int s,W inf){
    const int n=graph.size();
    vector<W> dist(n,inf);
    using state=tuple<W,int>;
    priority_queue<state,vector<state>,greater<state>> q;
    dist[s]=0,q.push(state(0,s));
    
    while(!q.empty()){
        W c; int v;
        tie(c,v)=q.top();q.pop();
        for(auto &e:graph[v]){
            W nc=c+e.cost; int nv=e.to;
            if(chmin(dist[nv],nc)) q.push(state(nc,nv));
        }