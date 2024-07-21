template<typename W>
struct N003 {
   typedef std::vector<long> LI;
   typedef std::vector<W>    LW;
   long n, e;
   LI ss, ds;
   LW ws;
   std::vector<LI> iss;
   N003(long n_, const LI& ss_, const LI& ds_, const LW& ws_)
      : n(n_), e(ss_.size()), ss(ss_), ds(ds_), ws(ws_) {
      iss.resize(n+1);
      for(long i = 0; i < e; ++i) {
         iss[ss[i]].push_back(i);
      }