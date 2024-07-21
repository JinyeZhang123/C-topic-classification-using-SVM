template<typename W>
struct N010 {
   typedef std::vector<long> LI;
   const N008<W>& g;
   LI xs, ys;
   long id;
   N010(const N008<W>& g_) : g(g_), xs(g.n+1, -1), id(0) {
      for(long i = 0; i < g.n + 1; ++i) dfs(i);
      std::reverse(ys.begin(), ys.end());
   }