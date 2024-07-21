template<typename T>
inline bool chmax(T& x, T a) {
	if (x <= a) { x = a; return true; }