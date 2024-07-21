template<typename C, typename T>
constexpr int count(C& c, T t) { return count(ALL(c), t); }