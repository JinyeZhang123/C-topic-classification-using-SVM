template<typename W>
struct N009 {
   typedef std::vector<long> LI;
   typedef std::vector<W>    LW;
   const N008<W>& g;
   LW xs;
   std::vector<bool> visited;
   W res;
   N009(const N008<W>& g_, long s, long t, W inf)
      : g(g_), xs(g.e, 0), visited(g.n+1) {
      res = 0;
      for(;;) {
         initDFS();
         W a = dfs(s, t, inf);
         res += a;
         if( a == 0 ) break;
      }