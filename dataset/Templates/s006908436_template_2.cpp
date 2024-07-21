template<typename C, typename F>
constexpr int count_if(C& c, F f) { return count_if(ALL(c), f); }