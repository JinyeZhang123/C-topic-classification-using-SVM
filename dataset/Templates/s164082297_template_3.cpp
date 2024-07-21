template <typename T>
void Dijkstra<T>::AddEdge(int f, int t, int c) {
    adj[f].push_back(Edge(t, c));
    if (!isDir) adj[t].push_back(Edge(f, c));
}