template<class T, class U>U SUM(const T& a, const U& v) { return accumulate(a.begin(),a.end(), v); }
