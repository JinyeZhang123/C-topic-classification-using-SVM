template<class T, class U> inline istream& operator>>(istream& is, pair<T, U>& rhs) { return is >> rhs.first >> rhs.second; }
