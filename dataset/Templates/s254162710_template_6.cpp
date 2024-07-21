template<typename T, typename U>
inline bool umax(T& m, U x) { if (m < x) { m = x; return true; }