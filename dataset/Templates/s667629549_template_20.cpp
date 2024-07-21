template<typename T>
void dijkstra(
        const WeightedGraph<T> &g,
        vector<T> &dist,
        int s)
{
    const auto INF = numeric_limits<T>::max();
    dist.assign(g.size(), INF);

    using Pi = pair< T, int >;
    priority_queue<Pi, vector<Pi>, greater<Pi>> que;
    dist[s] = 0;
    que.emplace(dist[s], s);
    while(!que.empty()) {
        T cost;
        int idx;
        tie(cost, idx) = que.top();
        que.pop();
        if(dist[idx] < cost) continue;
        for(auto &e : g[idx]) {
            auto next_cost = cost + e.cost;
            if(dist[e.to] <= next_cost) continue;
            dist[e.to] = next_cost;
            que.emplace(dist[e.to], e.to);
        }