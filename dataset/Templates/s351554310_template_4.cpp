template<class T>
T Dinic<T>::dfs(int v, int t, T f) {
    if(v == t) return f;
    for(int &i = iter[v];i < G[v].size();i++){
        edge &e = G[v][i];
        if(e.cap > 0 && level[v] < level[e.to]){
            T d = dfs(e.to,t,min(f,e.cap));
            if(d > 0){
                e.cap -= d;
                G[e.to][e.rev].cap += d;
                return d;
            }