template<typename T>
inline bool chmax(T &a, T b) {
	bool res = a < b;
	if (res)a = b;
	return res;
}