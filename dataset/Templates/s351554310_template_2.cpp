template<class T>
void Dinic<T>::add_edge(int from, int to, T cap) {
    G[from].emplace_back(to,cap,G[to].size());
    G[to].emplace_back(from,0,G[from].size() - 1);
}