template <typename MonoidType, class SegFunc>
struct SegmentTree {
    // node, identity element
    int n;
    vector<MonoidType> node;
    MonoidType E0;

    inline void build(int m, const vector<MonoidType> &v = vector<MonoidType>()) {
        if(v.size()) m = v.size();
        n = 1; while(n < m) n <<= 1;

        node = vector<MonoidType>(n << 1, E0);
        if(v.size()) {
            for(int i=0; i<m; i++) {
                node[n+i] = v[i];
            }