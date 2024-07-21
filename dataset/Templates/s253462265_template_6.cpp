template<class T> T sum(const vector<T>& v) {
    T ans = T();
    for(const T& t : v) ans += t;
    return ans;
}