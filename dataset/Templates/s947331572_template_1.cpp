template< typename G >
// Strongly Connected Component
// 時間計算量 : O(V+E)
struct SCC {
    // G : Unweighted Graph or Weighted Graph
    // g : SCCを求める対象のグラフ
    const G &g;
    // forward : 順向きの辺
    // backward : 逆向きの辺
    UnWeightedGraph forward, backward;
    // comp[i] : 頂点iが属す強連結成分のindex
    // order : 1回目の順向きdfsの帰りがけ順を格納
    // used : 1回目の順向きdfsで通ったかを記憶
    vector< int > comp, order, used;

    SCC(UnWeightedGraph &g) : g(g), forward(g.size()), backward(g.size()), comp(g.size(), -1), used(g.size()) {
        for(int i = 0; i < g.size(); i++) {
            for(auto& e : g[i]) {
                forward[i].emplace_back((int) e);
                backward[(int) e].emplace_back(i);
            }