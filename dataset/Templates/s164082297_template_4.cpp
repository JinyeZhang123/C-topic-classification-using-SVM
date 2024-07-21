template <typename T>
bool Dijkstra<T>::HasPath(int t) {
    return cost[t] != INF;
}