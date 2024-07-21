template<typename T, typename U>
inline bool chmin(T &x, U y){ if (x <= y) return false; x = y; return true; }