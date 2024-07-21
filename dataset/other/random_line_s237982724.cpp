template <typename T> void CERR(const multiset<T> &MULTISET) { cerr << "{ "; itrep(ITR, MULTISET) { CERR(*ITR); cerr << ", "; } cerr << "}"; }
