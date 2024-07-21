template< typename G >
struct StronglyConnectedComponents {
  const G &g; // g : 元のグラフ
  UnWeightedGraph gg; // gg :元のグラフと全く同じコピーを作る。一度呼び出すだけなら恐らく不要だが、main() 内で元のグラフ変数を再利用して変更したりする場合、build() 後に g の中身が変わってしまうことがあり得るため、こうしておいた方が便利なのだと思われる
  UnWeightedGraph rg; // rg : 辺を全て逆向きにしたグラフ
  vector<ll> comp; // SCC番号 0-indexed
  vector<ll> order; // 帰りがけ順に頂点番号を放り込むのに使う
  vector<ll> used; // dfs() で使う

  StronglyConnectedComponents(G &g) : g(g), gg(g.size()), rg(g.size()), comp(g.size(), -1), used(g.size()) {
    for(ll i = 0; i < g.size(); i++) {
      for(auto e : g[i]) {
        gg[i].emplace_back((ll) e);
        rg[(ll) e].emplace_back(i); // 逆辺グラフを作る
      }