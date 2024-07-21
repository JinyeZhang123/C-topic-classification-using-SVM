template <typename T> struct SegmentTree {
private:
    int n;
    vector<T> node;
public:
    SegmentTree(vector<T> v) {
        int sz = v.size();
        n = 1; while(n < sz) n *= 2;
        node.resize(2*n - 1, INF<T>());
        for(int i = 0; i < sz; i++) node[i + n - 1] = v[i];
        for(int i = n - 2; i >= 0; i--) node[i] = min(node[2*i + 1], node[2*i + 2]);
    }