template<class graph_type,class T> std::vector<T> spfa(const graph_type &graph,const int start){
    std::vector<T> dist(graph.size(),std::numeric_limits<T>::max());
    std::queue<int> queue;
    std::vector<bool> in_q(graph.size(),false);
    dist[start]=0;
    queue.push(start);
    in_q[start]=true;
    while(!queue.empty()){
        const int u=queue.front();
        queue.pop();
        in_q[u]=false;
        for(const auto &edge:graph[u]){
            const int v=edge.first;
            if(dist[v]>dist[u]+edge.second){
                dist[v]=dist[u]+edge.second;
                if(!in_q[v]){
                    queue.push(v);
                    in_q[v]=true;
                }