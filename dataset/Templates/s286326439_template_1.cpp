template <class T1, class T2> bool chmin(T1 &l, const T2 &r) {
  return (l > r) ? (l = r, true) : false;
}