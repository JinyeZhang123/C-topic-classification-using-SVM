template < typename T, typename U >
ostream& operator<<(ostream& os, pair< T, U >& p) {
    return os << "(" << p.first << ", " << p.second << ")";
}