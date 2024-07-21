template<class T>
vector<T> calc_divisor(T n) {
    vector<T> res;
    for (T i = 1; i*i <= n; ++i) {
        if (n % i == 0) {
            res.push_back(i);
            T j = n / i;
            if (j != i) res.push_back(j);
        }