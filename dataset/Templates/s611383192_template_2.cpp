template<typename T>
inline T chmax(T& a, const T& b) {
	if (a < b)a = b;
	return a;
}