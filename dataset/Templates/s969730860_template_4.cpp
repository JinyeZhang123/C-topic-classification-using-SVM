template <class Weight>
void connect(Graph<Weight> &g, size_t s, size_t d, Weight w=1) {
    g[s].push_back(Edge<Weight>(s, d, w));
}