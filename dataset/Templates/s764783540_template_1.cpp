template<typename T>
inline bool chmin(T& x, T a) {
	if (x >= a) { x = a; return true; }