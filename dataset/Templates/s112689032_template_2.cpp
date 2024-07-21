template <class T, class... U>
bool R(T &h, U &... t) { return R(h) && R(t...); }