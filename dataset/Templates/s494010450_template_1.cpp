template <typename G>
struct StronglyConnectedComponents
{
  const G &g;
  vector<vector<ll>> ng, rg;         // normal-graphとreversed-graph
  vector<int> compo, order, used; // compo…頂点がどの成分に属しているか、order…帰りがけ順で何番目か

  StronglyConnectedComponents(G &g) : g(g), ng(g.size()), rg(g.size()), compo(g.size(), -1), used(g.size())
  {
    for (int i = 0; i < g.size(); i++)
      for (auto t : g[i])
      {
        ng[i].emplace_back((int)t);
        rg[(int)t].emplace_back(i); // 逆辺
      }