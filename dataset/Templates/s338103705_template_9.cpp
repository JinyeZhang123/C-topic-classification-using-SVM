template<typename C, typename Pred>
constexpr void sort(C& c, Pred p) { sort(ALL(c), p); }