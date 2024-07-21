template <class T>
inline bool kbit(const T &x, const int &k) { return ((x >> k) & 1LL); }