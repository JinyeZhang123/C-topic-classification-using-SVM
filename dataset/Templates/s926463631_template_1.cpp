template <typename T, typename U> inline bool chmin(T& t, const U& u) {
  if(t > u) {
    t = u;
    return 1;
  }