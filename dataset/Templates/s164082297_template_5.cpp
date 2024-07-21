template <typename T>
vector<int> Dijkstra<T>::getShortestPath(int t) {
    vector<int> path;
    for (; t != -1; t = prever[t]) path.push_back(t);

    reverse(path.begin(), path.end());
    return path;
}