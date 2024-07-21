template <class T>
inline bool chmax(T& a, T b) {
    return a = (a < b) ? b : a;
}