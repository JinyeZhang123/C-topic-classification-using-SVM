template <class T>
inline void cmax(T &a, T b) { ((a < b) && (a = b)); }