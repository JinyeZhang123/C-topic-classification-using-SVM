template<typename First, typename... Rest>
inline void output(const First& first, const Rest&... rest) {
    cout << first << " "; output(rest...);
}