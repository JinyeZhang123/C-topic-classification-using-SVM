template < typename T >
ostream& operator<<(ostream& os, vector< T >& v) {
    os << "{";
    for (int i = 0; i < (int)v.size(); i++) {
        os << v[i] << (i < v.size() - 1 ? ", " : "");
    }