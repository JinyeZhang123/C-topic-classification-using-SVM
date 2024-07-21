template<typename T> vector<T> dijkstra(Graph<T> &gr, int s){
    using state = pair<T, int>;
    priority_queue<state, vector<state>, greater<state>> que;
    vector<T> d(gr.n, numeric_limits<T>::max());
    d[s] = 0;
    que.emplace(0, s);
    while(!que.empty()){
        state p = que.top(); que.pop();
        int v = p.second;
        if(d[v] < p.first) continue;
        for(edge<T> &e : gr.G[v]){
            if(d[e.to] > d[v] + e.cost){
                d[e.to] = d[v] + e.cost;
                que.emplace(d[e.to], e.to);
            }