template<typename W>
struct N008 {
   typedef std::vector<long> LI;
   typedef std::vector<W>    LW;
   long n, e;
   const LI &ss, &ds;
   const LW &ws;
   std::vector<LI> fi;
   std::vector<LI> ri;
   N008(long n_, const LI& ss_, const LI& ds_, const LW& ws_)
      : n(n_), e(ss_.size()), ss(ss_), ds(ds_), ws(ws_) {
      ri.resize(n+1);
      fi.resize(n+1);
      for(long i = 0; i < e; ++i) {
         fi[ss[i]].push_back(i);
         ri[ds[i]].push_back(i);
      }