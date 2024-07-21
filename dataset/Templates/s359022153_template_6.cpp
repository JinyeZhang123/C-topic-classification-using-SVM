template <class T, class... Args>
void debugs(const T &x, const Args &... args) {
	std::cerr << x << " ";
	debugs(args...);
}