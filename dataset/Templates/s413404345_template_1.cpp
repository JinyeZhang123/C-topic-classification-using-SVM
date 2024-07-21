template<class T>
vector<T> Dijkstra(const vector<vector<Edge>> &G, int s, T def) {
    using P = pair<T, int>;
    priority_queue<P, vector<P>, greater<P>> pq;
    vector<T> dist((int)G.size(), def);
    pq.push({0, s}