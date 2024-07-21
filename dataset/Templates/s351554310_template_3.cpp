template<class T>
void Dinic<T>::bfs(int s){
    for(auto &i : level) i = -1;
    queue<int> que;
    level[s] = 0;
    que.push(s);
    while(!que.empty()){
        int v = que.front();que.pop();
        for(int i = 0;i < G[v].size();i++){
            edge &e = G[v][i];
            if(e.cap > 0 && level[e.to] < 0){
                level[e.to] = level[v] + 1;
                que.push(e.to);
            }