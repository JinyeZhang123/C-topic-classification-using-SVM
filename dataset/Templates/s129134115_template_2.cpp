template<class T>
T fastpower(T x, ll pw) {
    T w = x, res = 1;
    while (pw>0) {
        if (pw&1) {
            res *= w; res %= modd;
        }