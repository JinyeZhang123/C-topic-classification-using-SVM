template<typename T, typename... Args>
T Smax(T a, Args... args) {
	return max(a, Smax(args...));
}