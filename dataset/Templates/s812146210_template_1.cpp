template <int N>
struct UnionFind {
    int ig[N];
    int d[N];
    vector<int> gi[N];
    int dc;
    void init(int n = N) {
        for (int i = 0; i < n; ++i) {
            ig[i] = d[i] = i;
            gi[i] = {i}