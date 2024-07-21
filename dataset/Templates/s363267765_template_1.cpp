template <class Edge>
struct graph {
    using edge_type = Edge;

    const size_t m_n_vertices;
    std::vector<std::vector<edge_type>> m_edges;

    graph(size_t n_vertices) : m_n_vertices(n_vertices), m_edges(n_vertices) { }