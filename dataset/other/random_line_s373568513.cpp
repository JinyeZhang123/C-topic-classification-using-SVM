template <typename T> void CERR(const set<T> &SET) { cerr << "{ "; itrep(ITR, SET) { CERR(*ITR); cerr << ", "; } cerr << "}"; }
