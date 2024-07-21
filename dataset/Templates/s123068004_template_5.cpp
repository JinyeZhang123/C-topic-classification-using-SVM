template<typename C, typename T, typename U>
constexpr void replace(C& c, T t, U u) { replace(ALL(c), t, u); }