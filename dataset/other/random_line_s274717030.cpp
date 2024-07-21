template <typename Iter, typename T> int lt(Iter L, Iter R, T v) { return lower_bound(L, R, v) - L - 1; }
