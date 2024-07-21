template <typename T>
void Dijkstra<T>::Run(int firstNode) {
    priority_queue<Edge, vector<Edge>, greater<Edge>> pq;

    cost[firstNode] = 0;
    pq.push(Edge(firstNode, 0LL));

    while (!pq.empty()) {
        Edge currentEdge = pq.top();
        pq.pop();

        if (cost[currentEdge.to] < currentEdge.cost) continue;

        for (Edge tmp : adj[currentEdge.to]) {
            T sumCost = currentEdge.cost + tmp.cost;
            if (cost[tmp.to] > sumCost) {
                cost[tmp.to] = sumCost;
                prever[tmp.to] = currentEdge.to;
                pq.push(Edge(tmp.to, cost[tmp.to]));
            }