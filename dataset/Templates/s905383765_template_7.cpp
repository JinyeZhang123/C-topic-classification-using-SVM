template<class G>
pair<vector<int>, vector<vector<int>>> scc(const G& g) {
  Scc<G> scc(g);
  scc.run();
  return { scc.dec, scc.red_g }