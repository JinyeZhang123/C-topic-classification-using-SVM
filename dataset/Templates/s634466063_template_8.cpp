template< typename T >
ostream &operator<<(ostream &os, const vector< T > &v) {
  for(int i = 0; i < SZ(v); i++) {
    os << v[i] << (i + 1 != SZ(v) ? " " : "");
  }