template<typename Head, typename... Tail>
void scan(Head& x, Tail&... xs) {
  scan1(x); scan(xs...);
}