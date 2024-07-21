template <typename T, typename U> ostream &operator<<(ostream &os, const pair<T, U> v) {os << "(" << v.first << ", " << v.second << ")"; return os;}
