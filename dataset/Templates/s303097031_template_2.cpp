template<class graph_type,class T> std::vector<T> spfa(const graph_type &graph,const int start){
    std::vector<T> dist(graph.size(),std::numeric_limits<T>::max());
    std::deque<int> dq;
    std::vector<bool> in_dq(graph.size(),false);
    dist[start]=0;
    dq.push_back(start);
    in_dq[start]=true;

    int64_t denom=1,numer=0;
    auto small_label_first=[&](){
        const int u=dq.front(),v=dq.back();
        if(dist[u]>dist[v]){
            dq.pop_back();
            dq.push_front(v);
        }