template<class T> 
pair<T, T> ChineseRem(const vector<T> &b, const vector<T> &m) {
  T r = 0, M = 1;
  for (int i = 0; i < (int)b.size(); ++i) {
    T p, q;
    T d = extgcd<T>(M, m[i], p, q); // p is inv of M/d (mod. m[i]/d)
    if ((b[i] - r) % d != 0) return make_pair(0, -1);
    T tmp = (b[i] - r) / d * p % (m[i]/d);
    r += M * tmp;
    M *= m[i]/d;
  }