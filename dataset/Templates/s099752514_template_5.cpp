template <class T, class... A>
void printd(const T &first, const A &... rest) { cout << fixed << setprecision(15) << first; prints_rest(rest...); }