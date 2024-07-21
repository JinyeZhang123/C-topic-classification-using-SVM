template <class T> auto Kruskal(int n, vector<tuple<int, int, T>> abc) {
    unionfind uf(n);
    vector<tuple<int, int>> ret(0);
    int weight_sum = 0;
    sort(abc.begin(), abc.end(),
         [](const auto& x, const auto& y) { return get<2>(x) < get<2>(y); }