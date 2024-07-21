template<class Weight>
struct ShortestPath {
    WeightedGraph<Weight> g;

    explicit ShortestPath(WeightedGraph<Weight> g) : g(g), dist(g.n), prev(g.n) {
    }