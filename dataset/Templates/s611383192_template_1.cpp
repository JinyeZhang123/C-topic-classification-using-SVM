template<typename T>
inline T chmin(T& a, const T& b) {
	if (a > b)a = b;
	return a;
}