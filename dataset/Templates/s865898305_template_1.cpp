template<typename T, typename... Args>
T sum(T a, Args... args) { return a + sum(args...); }