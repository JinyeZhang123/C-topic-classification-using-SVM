template<typename G>
struct LowLink {
  const G &g;
  vector<int> used, ord, low;
  vector<int> articulation;
  vector<pair<int, int>> bridge;

  LowLink(const G &g) : g(g) {}