template <int B> // (1 << B) >= MAX_LEN
struct lowest_common_ancestor {
    vector<vector<int>> graph;
    int N, root;
    int parent[B][1 << B], depth[1 << B];

    lowest_common_ancestor() {}