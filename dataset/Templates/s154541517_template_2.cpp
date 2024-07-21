template <class T> inline bool chmin(T &a, const T b) {
    if(a <= b) return false;
    a = b;
    return true;
}