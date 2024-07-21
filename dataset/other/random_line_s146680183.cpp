template<class T, class U>int LOWER(const T& a, const U& v) { return lower_bound(a.begin(),a.end(), v) - a.begin(); }
