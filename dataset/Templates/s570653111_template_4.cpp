template <class T, class... A>
void prints(const T &first, const A &... rest) { cout << first; prints_rest(rest...); }