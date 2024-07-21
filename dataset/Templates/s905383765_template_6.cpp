template<class G>
struct Scc {
  const G& g;
  vector<vector<int>> rev_g, red_g;
  vector<int> ord, dec;
  vector<bool> vis;

  Scc(const G& g) : g(g) {}