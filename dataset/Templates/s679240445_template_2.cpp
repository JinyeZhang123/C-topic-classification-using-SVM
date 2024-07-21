template <typename tp>
inline void ckmn(tp& x,tp y) {
  x = x < y ? x : y;
}