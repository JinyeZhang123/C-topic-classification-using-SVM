template < typename T, typename U >
ostream& operator<<(ostream& os, map< T, U >& map_var) {
    os << "{";
    for (auto itr = map_var.begin(); itr != map_var.end(); itr++) {
        os << "(" << itr->first << ", " << itr->second << ")";
        itr++;
        if (itr != map_var.end()) os << ", ";
        itr--;
    }