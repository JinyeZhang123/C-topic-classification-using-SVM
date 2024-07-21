template<class T>
T Dinic<T>::max_flow(int s, int t) {
    T flow = 0;
    for(;;){
        bfs(s);
        if(level[t] < 0) return flow;
        for(auto& i : iter) i = 0;
        T f;
        while((f = dfs(s,t,(1LL << 55))) > 0){
            flow += f;
        }