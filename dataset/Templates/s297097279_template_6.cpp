template<typename T, typename... Args>
T Smin(T a, Args... args) { return min(a, Smin(args...)); }