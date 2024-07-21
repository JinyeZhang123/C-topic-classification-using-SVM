template <class Graph>
struct LCA {
    using Query = pii;
    Graph g;
    vi color;
    vi ancestor;
    vector<vector<pair<int, Query>>> query_set;
    vi res;
    UnionFind uf;
    LCA(const Graph &g, vector<Query> &query) :
            g         (g),
            color     (sz(g)),
            ancestor  (sz(g)),
            query_set (sz(g)),
            res       (sz(query)),
            uf        (sz(g))
    {
        int qs = sz(query);
        rep(i, 0, qs) {
            query_set[query[i].first ].emplace_back(i, query[i]);
            query_set[query[i].second].emplace_back(i, query[i]);
        }