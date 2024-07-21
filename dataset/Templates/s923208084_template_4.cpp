template<typename W>
struct N005 {
   std::vector<W> xs;
   bool negativeCycle;
   N005(const N003<W>& g, long s, W inf) : xs(g.n+1, inf) {
      long latest;
      xs[s] = 0;
      for(long i = 0; i < g.n+1; ++i) {
         for(long k = 0; k < g.e; ++k) {
            if( xs[g.ss[k]] == inf ) continue;
            W nd = xs[g.ss[k]] + g.ws[k];
            if( nd < xs[g.ds[k]] ) {
               xs[g.ds[k]] = nd;
               latest = i;
            }