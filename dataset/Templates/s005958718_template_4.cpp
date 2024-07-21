template < typename T >
ostream& operator<<(ostream& os, set< T >& set_var) {
    os << "{";
    for (auto itr = set_var.begin(); itr != set_var.end(); itr++) {
        os << *itr;
        ++itr;
        if (itr != set_var.end()) os << ", ";
        itr--;
    }