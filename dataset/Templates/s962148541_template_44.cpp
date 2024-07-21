template <class num_type>
struct max_flow {
    int n;
    num_type flow;
    vector<map<int, num_type>> g_temp;
    vector<vector<int>> gkey_temp;
    max_flow(int& t1, vector<tuple<int, int, num_type>>& t2, int indexed) {
        int u, v;
        num_type w;
        n = t1;
        g_temp.resize(n);
        gkey_temp.resize(n);
        for (tuple<int, int, num_type> t3 : t2) {
            tie(u, v, w) = t3;
            add_edge(u - indexed, v - indexed, w);
        }