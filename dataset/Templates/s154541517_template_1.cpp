template <class T> inline bool chmax(T &a, const T b) {
    if(a >= b) return false;
    a = b;
    return true;
}