template<typename T, typename U>
inline bool umin(T& m, U x) { if (m > x) { m = x; return true; }