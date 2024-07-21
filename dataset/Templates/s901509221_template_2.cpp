template <typename T1, typename T2>
bool chmin(T1 &a, const T2 &b) {
    if (a > b) { a = b; return true; }