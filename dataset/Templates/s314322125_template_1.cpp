template<typename T>
class UnionFind {
    std::map<T, T> parent;
    std::map<T, int> rank;
public:
    void unionSet(const T& a, const T& b) {
        T x = findSet(a), y = findSet(b);
        if(rank[x] < rank[y]) std::swap(x, y);
        parent[y] = x;
        if(rank[x] == rank[y]) rank[x] += 1;
    }