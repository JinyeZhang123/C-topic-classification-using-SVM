template<typename C, typename F, typename U>
constexpr void replace_if(C& c, F f, U u) { (ALL(c), f, u); }