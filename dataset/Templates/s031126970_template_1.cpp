template <typename G>
struct Strongly_Connected_Components
{
    const G &g;

    UnweightedGraph g1, g2;
    vector<int> comp, order, used;

    Strongly_Connected_Components(G &g) : g(g), g1(g.size()), g2(g.size()), comp(g.size(), -1), used(g.size())
    {
        for (int i = 0; i < g.size(); i++)
        {
            for (auto &e : g[i])
            {
                g1[i].emplace_back((int)e);
                g2[(int)e].emplace_back(i);
            }