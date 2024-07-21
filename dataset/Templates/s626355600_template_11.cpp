template <class T> T floor_sum(T n, T m, T a, T b) {
    T ret = 0;
    if (b >= m) {
        ret += n * (b / m);
        b %= m;
    }