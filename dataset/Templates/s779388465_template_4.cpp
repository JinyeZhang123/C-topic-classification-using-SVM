template<typename W>
struct N006 {
   std::vector<std::vector<W>> xss;
   bool negativeCycle;
   N006(const N003<W>& g, W inf) : negativeCycle(false) {
      xss.resize(g.n+1);
      for(auto& xs : xss) xs.resize(g.n+1, inf);
      for(long i = 0; i < g.n+1; ++i) xss[i][i] = 0;
      for(long i = 0; i < g.e; ++i) {
         xss[g.ss[i]][g.ds[i]] = g.ws[i];
      }