template<typename First, typename... Rest>
inline void output(const First& first, const Rest&... rest) {
    cerr << first << " "; output(rest...);
}