template <typename T>
class Kruskal {
private:
    int n;
    vector<edge<T>> edges;
    UnionFind uf;
public:
    Kruskal(int _n) : n(_n), uf(UnionFind(n)) {}