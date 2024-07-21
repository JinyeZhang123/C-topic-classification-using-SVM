template <class Weight>
vector<Weight> shortest_distance(const Graph<Weight> &g, size_t s) {
    /* Dijkstra */
    size_t V=g.size();
    vector<Weight> d(V, INF); d[s]=0;

    lp_queue<pair<Weight, size_t>> q; q.push(make_pair(0, s));
    while (!q.empty()) {
        pair<Weight, size_t> p=q.top(); q.pop();
        size_t v=p.second;
        if (d[v] < p.first) continue;

        for (const Edge<Weight> &e: g[v])
            if (d[e.dst] > d[v] + e.weight) {
                d[e.dst] = d[v] + e.weight;
                q.push(make_pair(d[e.dst], e.dst));
            }