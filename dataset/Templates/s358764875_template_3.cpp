template <typename tp>
inline void ckmx(tp& x,tp y) {
  x = x < y ? y : x;
}