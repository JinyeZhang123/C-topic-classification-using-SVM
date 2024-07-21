template<class L, class R> ostream& operator<<(ostream &os, pair<L,R> P) {
  return os<<"("<<P.first<<","<< P.second << ")";
}